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
	var t,k,tally int
	fmt.Fscan(in,&t,&k)
	a:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
	}
	sort.Ints(a)
	for j:=t-1;j>=0;j--{
		k -= a[j]
		tally++
		if k < 1 {
			fmt.Fprintln(out,tally)
			break
		}
	}
}