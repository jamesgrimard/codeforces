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
		var a,b string
		fmt.Fscan(in,&a,&b)
		if a==b {
			fmt.Fprintln(out,"=")
		} else if string(a[len(a)-1]) < string(b[len(b)-1]) {
			fmt.Fprintln(out,">")
		} else if string(a[len(a)-1]) > string(b[len(b)-1]) {
			fmt.Fprintln(out,"<")
		} else {
			if (len(a) > len(b) && string(a[len(a)-1]) == "L") || (len(a) < len(b) && string(a[len(a)-1]) == "S") {
				fmt.Fprintln(out, ">")
			} else {
				fmt.Fprintln(out, "<")
			}
		}
	}
}
