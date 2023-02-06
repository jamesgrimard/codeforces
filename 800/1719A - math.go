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
		var r,c int 
		fmt.Fscan(in,&r,&c)
		if (r%2 == 0 && c%2 == 0) || (r%2 != 0 && c%2 != 0) {
			fmt.Fprintln(out,"Tonya")
		} else {
			fmt.Fprintln(out,"Burenka")
		}
	}
}