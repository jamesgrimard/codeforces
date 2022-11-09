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
		if a > (b/2)+1 {
			fmt.Fprintln(out,b%a)
		} else {
			fmt.Fprintln(out,b%((b/2)+1))
		}
	}
}
