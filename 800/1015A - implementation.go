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
	var n,m int
	fmt.Fscan(in,&n,&m)
	a:= make([]int,m)
	for j:=0;j<n;j++{
		var l,r int
		fmt.Fscan(in,&l,&r)
		for k:=l-1;k<=r-1;k++ {
			a[k] = 1
		}
	}
	var k int
	for j:=0;j<m;j++{
		if a[j] == 0 {
			k++
		}
	}
	fmt.Fprintln(out,k)
	for j:=0;j<m;j++{
		if a[j] == 0 {
			fmt.Fprintf(out,"%v ",j+1)
		}
	}
	fmt.Fprintln(out)
}
