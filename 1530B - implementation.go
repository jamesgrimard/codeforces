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
		var y,x int
		fmt.Fscan(in,&y,&x)
		for j:=0;j<y;j++{
			for k:=0;k<x;k++{
				if j == 0 || j == y-1 {
					if k & 1 == 0 {
						fmt.Fprintf(out,"1")
						continue
					}
				}
				if j & 1 == 0 && j <= y-3 && j != 0 {
					if k == 0 || k == x-1 {
						fmt.Fprintf(out,"1")
						continue
					}
				}
				fmt.Fprintf(out,"0")
			}
			fmt.Fprintln(out)
		}
	}
}

// place a plate at every even element on the first and last row, ie: 0,2,4,6,8...
// p 0 p 0 p 0
// 0 0 0 0 0 0
// p 0 p 0 p 0
// place a plate on the wings (0,width-1) on every other row, not including last.