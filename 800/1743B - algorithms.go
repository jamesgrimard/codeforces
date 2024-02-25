//package main
// github.com/jamesgrimard/codeforces
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
		for j:=1;j<=n/2;j++{
			fmt.Fprintf(out,"%v %v ",j,n+1-j)
		}
		if n&1==1{fmt.Fprintf(out,"%v",n/2+1)}
		fmt.Fprintln(out)
	}
}