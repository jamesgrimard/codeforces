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
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n,x,a,b int
		fmt.Fscan(in,&n,&x,&a,&b)
		fmt.Fprintln(out,min(abs(a-b)+x,n-1))
	}
}
func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}
func abs(x int) int {
	if x < 0 {
		return x*-1
	}
	return x
}