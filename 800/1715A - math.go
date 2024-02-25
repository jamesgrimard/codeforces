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
		var y,x int
		fmt.Fscan(in,&y,&x)
		if x==1 && y==1 {
			fmt.Fprintln(out,0)
		} else {
			fmt.Fprintln(out,(y-1) + (x-1) + min(x,y))
		}
	}
}

func min(x,y int) int {
	if x <= y {
		return x
	}
	return y
}
