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
		var n int
		fmt.Fscan(in,&n)
		var x string
		fmt.Fscan(in,&x)

		for j:=0;j<n;j++ {
			fmt.Fprint(out,string(x[n-1]))
		}
		fmt.Fprintln(out,)
	}
}
