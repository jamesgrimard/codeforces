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
		var n,m int
		fmt.Fscan(in,&n,&m)
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		if n == m {
			var add int
			for j:=0;j<n;j++{
				add += a[j]
			}
			fmt.Fprintln(out,add)
			continue
		}
		for j:=0;j<n-m;j++{
			if a[j] > a[j+m] {
				a[j],a[j+m] = a[j+m],a[j]
			}
		}
		var total int
		for j:=n-1;j>=m;j--{
			var sum int
			for k:=0;k<m;k++{
				sum += a[j-k]
			}
			if sum > total {
				total = sum
			}
		}
		fmt.Fprintln(out,total)
	}	
}

// rearrange array to cluster peaks
// sort using increment of k
// constraint : like indices can only be swapped i mod k == j mod k
// length of the peak corresponds to k consecutive elements
// find largest sum of peak
// nested loop to find cumulative max sum of variable length k