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
	fmt.Fscan(in, &t)
	for i:=0;i<t;i++{
		var n,k int
		fmt.Fscan(in,&n,&k)
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		sort.Ints(a)
		var sum int
		for j:=n-1;j>=n-1-k;j--{
			sum += a[j]
		}
		fmt.Fprintln(out,sum)
	}
}

// sum largest elements in list, k times
// iterate reverse in segments of k length, 1,2,3,4,5 : if k == 2 ; return (4+5)