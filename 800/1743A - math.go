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
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
		}
		fmt.Fprintln(out,Cumsum(10-n-1)*6)
	}
}
func Cumsum(x int) int {
	sum:=0
	for j:=1;j<=x;j++{
		sum+=j
	}
	return sum
}