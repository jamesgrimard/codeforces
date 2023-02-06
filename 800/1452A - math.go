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
		var x,y int
		fmt.Fscan(in,&x,&y)
		if x==y {
			fmt.Fprintln(out,x*2)
		} else {
			fmt.Fprintln(out,max(x,y)*2-1)
		}
	}
}
func max(x,y int) int {
	if x >= y {
		return x
	}
	return y
}

