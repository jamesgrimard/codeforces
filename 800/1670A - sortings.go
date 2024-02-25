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
		var n,negs int
		fmt.Fscan(in,&n)
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
			if a[j] < 0 {
				negs++
				a[j] *= -1
			}
		}
		for j:=0;j<negs;j++{
			a[j] *= -1
		}
		for j:=1;j<n;j++{
			if a[j] < a[j-1] {
				fmt.Fprintln(out,"NO")
				goto out2
			}
		}
		fmt.Fprintln(out,"YES")
		out2:
	}
}

// swap all negatives to the beginning of the set, set must be in ascending order
// iterate over set and check that a[j] > a[j-1]