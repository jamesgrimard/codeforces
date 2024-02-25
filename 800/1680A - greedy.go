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
		var a,b,c,d int
		fmt.Fscan(in,&a,&b,&c,&d)

		if c >= a && c <= b {
			fmt.Fprintln(out,c)
		} else if a >=c && a <= d{
			fmt.Fprintln(out,a)
		} else if b >= c && b <= d {
			fmt.Fprintln(out,c)
		} else if d >= a && d <= b {
			fmt.Fprintln(out,a)
		} else {
			fmt.Fprintln(out,c+a)
		}
	}
}
