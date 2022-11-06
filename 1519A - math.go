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
		var a,b,c int
		fmt.Fscan(in,&a,&b,&c)
		if max(a,b) > (c+1)*min(a,b) {
			fmt.Fprintln(out,"NO")
		} else {
			fmt.Fprintln(out,"YES")
		}
	}
}

func min (x,y int) int {
	if x>y{
		return y
	} else {
		return x
	}
}
func max (x,y int) int {
	if x>y{
		return x
	} else {
		return y
	}
}
