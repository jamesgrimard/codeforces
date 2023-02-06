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
	var t,count int
	fmt.Fscan(in,&t)
	a:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
	}
	for j:=1;j<t-1;j++{
		if a[j] < a[j+1] && a[j] < a[j-1] || a[j] > a[j+1] && a[j] > a[j-1] {
			count++
		}
	}
	fmt.Fprintln(out,count)
}