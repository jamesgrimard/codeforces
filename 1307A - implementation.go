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
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n,k int
		fmt.Fscan(in,&n,&k)
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		for j:=1;j<n;j++ {
			for a[j] > 0 {
				if k - (1*j) < 0 {
					goto out
				}
				k -= (1*j)
				a[0]++
				a[j]--
			}
		}
		out:
		fmt.Fprintln(out,a[0])
	}
}

// nested loop that multiplys the distance from a[0] to a[i] by the amount moved and checks it against remaining time