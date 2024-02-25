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
		var x,y,a,b int 
		fmt.Fscan(in,&x,&y,&a,&b)
		if (y-x) % (a+b) == 0 {
			fmt.Fprintln(out, (y-x)/(a+b))
		} else {
			fmt.Fprintln(out,-1)
		}
	}
}
