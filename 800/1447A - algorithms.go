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
		fmt.Fprintln(out,n)
		for j:=1;j<=n;j++{
			fmt.Fprintf(out,"%v ",j)
		}
		fmt.Fprintln(out)
	}
}

// 1 2 3
// hold 1
// 1 3 4
// hold 2
// 3 3 6
// hold 3
// 6 6 6 
// return 1 2 3 