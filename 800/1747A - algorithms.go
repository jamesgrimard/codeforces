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
		var largest,smallest int
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x < 0 {
				smallest+=x
				continue
			}
			largest+=x
		}
		fmt.Fprintln(out, abs(abs(largest)-abs(smallest)))
	}
}
func abs(x int) int {
	if x<0{
		return x*-1
	}
	return x
}