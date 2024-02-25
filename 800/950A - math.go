//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var a,b,c int
	fmt.Fscan(in,&a,&b,&c)
	if min(a,b) + c <= max(a,b) {
		fmt.Fprintln(out,(min(a,b)+c)*2)
	} else {
		fmt.Fprintln(out,(((min(a,b) + c) - max(a,b)) / 2 + max(a,b))*2)
	} 
}

func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}
func max(a,b int) int {
	if a >= b {
		return a
	}
	return b
}