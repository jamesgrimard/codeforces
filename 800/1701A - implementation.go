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
		var x,y,x2,y2 int
		fmt.Fscan(in,&x,&y,&x2,&y2)
		if x == 1 && y == 1 && x2 == 1 && y2 == 1 {
			fmt.Fprintln(out,2)
		} else if x == 1 || y == 1 || x2 == 1 || y2 == 1 {
			fmt.Fprintln(out,1)
		} else {
			fmt.Fprintln(out,0)
		}
	}
}
