package main
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
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		sort.Ints(a)
		var f,s,last int = a[0],0,0
		for j:=n-1;j>=n/2+1;j--{
			f+=a[n-j]
			s+=a[j]
			if s-f > 0 {
				fmt.Fprintln(out,"YES")
				goto out
			}
			if f-s >= last && j!=n-1 {
				fmt.Fprintln(out,"NO")
				goto out
			}
			last=f-s
		}
		fmt.Fprintln(out,"NO")
		out:
	}
}
