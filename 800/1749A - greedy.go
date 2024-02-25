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
		var n,m int
		fmt.Fscan(in,&n,&m)
		for j:=0;j<m;j++{
			var x,y int
			fmt.Fscan(in,&x,&y)
		}
		if (n - (m-1)) * (n - (m-1)) - 1 > 0 {
			fmt.Fprintln(out,"YES")
		} else {
			fmt.Fprintln(out,"NO")
		}
	}
}
