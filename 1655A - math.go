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
		var x int
		fmt.Fscan(in,&x)
		if x%4 == 0 {
			fmt.Fprintln(out, x/4,x/4,x/4,x/4)
			continue
		}
		fmt.Fprintln(out,x-3,1,1,1)
	}
}