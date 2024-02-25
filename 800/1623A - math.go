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
		var y,x,ys,xs,yf,xf int 
		fmt.Fscan(in,&y,&x,&ys,&xs,&yf,&xf,)
		if yf == ys || xf == xs {
			fmt.Fprintln(out,0)
			continue
		}
		var r,c int
		if yf > ys {
			r = yf-ys
		} else {
			r = 2*y-yf-ys
		}
		if xf > xs {
			c = xf-xs
		} else {
			c = 2*x-xs-xf
		}
		if r > c {
			fmt.Fprintln(out,c)
		} else {
			fmt.Fprintln(out,r)
		}
	}
}