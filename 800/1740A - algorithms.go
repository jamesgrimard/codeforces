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
		var n int
		fmt.Fscan(in,&n)
		if n == 2 {
			fmt.Fprintln(out,2)
		} else {
			fmt.Fprintln(out,3)
		}
	}
}

// all prime numbers are odd
// odd + odd = even
