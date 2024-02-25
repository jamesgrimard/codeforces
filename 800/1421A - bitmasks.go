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
		var a,b int
		fmt.Fscan(in,&a,&b)
		var z int = (a ^ min(a,b)) + (b ^ min(a,b))
		fmt.Fprintln(out,z)
	}
}
func min (x,y int) int {
	if x>y{
		return y
	} else {
		return x
	}
}