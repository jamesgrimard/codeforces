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
		var n,k1,k2 int
		fmt.Fscan(in,&n,&k1,&k2)
		var w,b int
		fmt.Fscan(in,&w,&b)
		w_available:= abs(k1-k2)/2 + min(k1,k2)
		b_available:= abs((n-k1)-(n-k2))/2 + min(n-k1,n-k2)
		if w > w_available || b > b_available {
			fmt.Fprintln(out,"NO")
		} else {
			fmt.Fprintln(out,"YES")
		}
	}
}

func abs(x int) int {
	if x < 0 {
		return x*-1
	}
	return x
}
func min(a,b int) int {
	if a>=b{
		return b
	}
	return a
}