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
		var n,k,holder int
		fmt.Fscan(in,&n,&k)
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if k | x > holder {
				holder = k | x
			}
		}
		fmt.Fprintln(out,holder)
	}
}