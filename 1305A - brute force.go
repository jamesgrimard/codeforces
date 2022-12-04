//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
    "sort"
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
		a:= make([]int,n)
		b:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		for j:=0;j<n;j++{
			fmt.Fscan(in,&b[j])
		}
		sort.Ints(a)
		sort.Ints(b)
		for j:=0;j<n;j++{
			fmt.Fprintf(out,"%v ",a[j])
		}
		fmt.Fprintln(out)
		for j:=0;j<n;j++{
			fmt.Fprintf(out,"%v ",b[j])
		}
		fmt.Fprintln(out)
	}
}
// all elements distinct, just sort both sets