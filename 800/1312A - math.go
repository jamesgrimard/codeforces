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
		if x%y == 0 {
			fmt.Fprintln(out,"YES")
		} else {
			fmt.Fprintln(out,"NO")
		}
	}
}