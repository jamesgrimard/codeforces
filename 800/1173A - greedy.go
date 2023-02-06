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
	if c >= abs(a-b) && c != 0 {
		fmt.Fprintln(out,"?")
	} else if a < b {
		fmt.Fprintln(out,"-")
	} else if a > b {
		fmt.Fprintln(out,"+")
	} else {
		fmt.Fprintln(out,"0")
	}
}

func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}