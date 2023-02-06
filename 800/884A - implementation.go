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
	var t,k int
	fmt.Fscan(in,&t,&k)
	a:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
	}
	for j:=1;j<=t;j++{
		k -= (86400 - a[j-1])
		if k <= 0 {
			fmt.Fprintln(out,j)
			break
		}
	}
}