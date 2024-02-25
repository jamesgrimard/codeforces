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
		var n,h int
		fmt.Fscan(in,&n,&h)
		var s,b int
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x > b {
				s,b = b,x
				continue
			}
			if x > s {
				s = x
			}
		}
		if h <= b {
			fmt.Fprintln(out,1)
			continue
		}
		if h <= b+s {
			fmt.Fprintln(out,2)
			continue
		}
		if h%(s+b) == 0 {
			fmt.Fprintln(out,h/(s+b)*2)
		} else {
			if h%(s+b) > b {
				fmt.Fprintln(out,h/(s+b)*2+2)
			} else {
				fmt.Fprintln(out,h/(s+b)*2+1)
			}
		}
	}
}
