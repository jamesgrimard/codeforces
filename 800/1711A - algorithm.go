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
		fmt.Fprintf(out,"%v ",n)
		for j:=1;j<n;j++{
			fmt.Fprintf(out,"%v ",j)
		}
		fmt.Fprintln(out,)
	}
}