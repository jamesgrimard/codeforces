//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
)
func main() {
	var in = bufio.NewReader(os.Stdin)
	var out = bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var n,m,k int
	fmt.Fscan(in,&n,&m,&k)
	var c,e int
	for i:=0;i<n;i++{
		var x int
		fmt.Fscan(in,&x)
 		if x < c || i == 0{
 			c = x
 		}
	}
	for i:=0;i<m;i++{
		var x int
		fmt.Fscan(in,&x)
 		if x > e {
 			e = x
 		}
	}
    fmt.Fprintln(out,max(k/c * e + (k % c),k))
}
func max(a,b int) int {
	if a >= b {
		return a
	}
	return b
}