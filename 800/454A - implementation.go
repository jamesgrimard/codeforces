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
		for j:=0;j<t;j++{
			if j >= t/2 - i && j <= t/2 + i && i <= t/2 {
				fmt.Fprintf(out,"D")
				continue
			}
			if j >= t/2 - (t-i-1) && j <= t/2 + (t-i-1) && i > t/2 {
				fmt.Fprintf(out,"D")
				continue
			}
			fmt.Fprintf(out,"*")
		}
		fmt.Fprintln(out)
	}
}