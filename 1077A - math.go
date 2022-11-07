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
		var a,b,c int
		fmt.Fscan(in,&a,&b,&c)
		if c % 2 == 0 {
			fmt.Fprintln(out,(a-b)*(c/2))
		} else {
			fmt.Fprintln(out,(a-b)*(c/2)+a)	
		}
	}
}