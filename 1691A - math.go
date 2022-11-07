//package main
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
		odds:=0
		evens:=0
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x%2 == 0 {
				evens++
			} else {
				odds++
			}
		}
		if evens > odds {
			fmt.Fprintln(out,odds)
		} else {
			fmt.Fprintln(out,evens)
		}
	}
}
