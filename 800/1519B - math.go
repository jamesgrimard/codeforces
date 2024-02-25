//package main
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var a,b,c int
		fmt.Fscan(in,&a,&b,&c) // take inputs
		// always moving horizontally first, then vertically
		x:= b-1 // cost to move horizontally
		y:= b*(a-1) // cost to move vertically
		if x+y == c { // if total cost = c, yes; else no
			fmt.Fprintln(out,"YES")
		} else {
			fmt.Fprintln(out,"NO")
		}
	}
}