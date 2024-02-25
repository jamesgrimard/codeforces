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
		if x == 1 || y == 1 {
			fmt.Fprintln(out,"YES")
		} else if x == 2 && y == 2{
			fmt.Fprintln(out,"YES")
		} else {
			fmt.Fprintln(out,"NO")
		}
	}
}
