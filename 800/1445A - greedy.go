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
		var n,x int
		fmt.Fscan(in,&n,&x)
		a:= make([]int,n)
		b:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		for j:=0;j<n;j++{
			fmt.Fscan(in,&b[j])
		}
		sort.Ints(a)
		for j:=1;j<n;j++{
			if b[j] > b[j-1] {
				b[j],b[j-1] = b[j-1],b[j]
				j-=2
				if j < 0 {
					j = 0
				}
			}
		}
		for j:=0;j<n;j++{
			if a[j] + b[j] > x {
				fmt.Fprintln(out,"No")
				goto out
			}
		}
		fmt.Fprintln(out,"Yes")
		out:
	}
}

// determine if you can rearrange the elements of set b so that the sum of a[i] and b[i] <= x
// sort the elements of a, sort the elements of b descending
// this comparitive arrangement will yield the lowest sum 
// if the sum is > x return no