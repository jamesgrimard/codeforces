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
		fmt.Fprintln(out,2)
		p:= make([]int,n)
		tally:=1
		p[0] = 1
		for j:=1;j<n;j++{
			if p[j-1] * 2 <= n {
				p[j] = p[j-1] * 2
				continue
			}
			tally+=2
			p[j] = tally
		}
		for j:=0;j<n;j++{
			fmt.Fprintf(out,"%v ",p[j])
		}
		fmt.Fprintln(out)
	}
}
