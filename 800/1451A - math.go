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
		if x <= 3 {
			fmt.Fprintln(out,x-1)		
		} else if x%2 == 0 {
			fmt.Fprintln(out,2) 
		} else {
			fmt.Fprintln(out,3)
		}
	}
}