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
		if n == 3 {
			fmt.Fprintln(out,-1)
			continue
		}
		for j:=n/2+1;j<=n;j++{
			fmt.Fprintf(out,"%v ",j)
		}
		for j:=1;j<=n/2;j++{
			fmt.Fprintf(out,"%v ",j)
		}
		fmt.Fprintln(out,)
	}
}