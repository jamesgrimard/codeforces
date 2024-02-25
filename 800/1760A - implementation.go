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
		var a,b,c int
		fmt.Fscan(in,&a,&b,&c)
		if (a > b && a < c) || (a > c && a < b) {
			fmt.Fprintln(out,a)
		} else if (b > a && b < c) || (b < a && b > c) {
			fmt.Fprintln(out,b)
		} else {
			fmt.Fprintln(out,c)
		}
	}
}

// basic logic sort to find middle value