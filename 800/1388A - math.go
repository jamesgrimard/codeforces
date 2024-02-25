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
		if x < 31 {
			fmt.Fprintln(out,"NO")
		} else {
			fmt.Fprintln(out,"YES")
			a:= x-30
			if a==6 || a==10 || a==14 {
				fmt.Fprintln(out,6,10,15,x-31)
			} else {
				fmt.Fprintln(out,6,10,14,x-30)
			}
		}
	}
}
