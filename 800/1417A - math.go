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
		var n,m int
		fmt.Fscan(in,&n,&m)
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		sort.Ints(a)
		for j:=1;j<n;j++{
			a[j] = m - a[j]
		}
		var count int
		for j:=1;j<n;j++{
			count += (a[j] / a[0])
		}
		fmt.Fprintln(out,count)
	}
}

// sort the list ascending
// skip the first (smallest) element
// deduct a[j] from m
// iterate over list for a[j] / a[0] to get the count of sum amounts