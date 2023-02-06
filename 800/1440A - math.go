package main
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
		var n,c0,c1,h int
		fmt.Fscan(in,&n,&c0,&c1,&h)
		var b string
		fmt.Fscan(in,&b)
		if c0 > c1+h {
			c0 = c1+h
		} else if c1 > c0+h {
			c1 = c0+h
		}
		var total int
		for j:=0;j<n;j++{
			if string(b[j]) == "1" {
				total+=c1
			} else {
				total+=c0
			}
		}
		fmt.Fprintln(out,total)
	}
}
