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
		counter:=0
		for j:=0;j<x;j++{
			var x int
			fmt.Fscan(in,&x)
			counter+=x
		}
		if counter - y >= 0 {
			fmt.Fprintln(out, counter-y)
		} else {
			fmt.Fprintln(out,0)
		}
	}
}
