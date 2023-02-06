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
		var n int
		fmt.Fscan(in,&n)
		a:= make([]int,n)
		var perf bool = true
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
			if j+1 != a[j] {
				perf = false
			}
		}
		if perf == true {
			fmt.Fprintln(out,0)
			continue
		}
		for j:=0;j<n*2;j++{
			for k:=(j&1);k<n-1;k+=2{
				if a[k] > a[k+1] {
					a[k] , a[k+1] = a[k+1] , a[k]
				}
			}
			perf = true
			for l:=1;l<=n;l++{
				if a[l-1] != l {
					perf = false
				}
			}
			if perf == true {
				fmt.Fprintln(out,j+1)
				break
			}
		}
	}
}
// odds-evens sort

// *** an iteration is counted even if it doesn't make any changes ie:

// 2 4 1 3 5 
// 2 4 1 3 5 --1 *no changes but still counts
// 2 1 4 3 5 --2
// 1 2 3 4 5 --3

// 3 2 1 start
// 2 3 1 odds swap i[1],i[2] - i[3] out of range
// 2 1 3 evens swap i[2],i[3] - no other evens
// 1 2 3 odds swap i[3] out of range, loop back to 1, i[1],i[2] swap

// 2 4 1 3 5 
// 2 1 4 3 5 --1
// 1 2 3 4 5 --2

// 3 2 1
// 2 3 1 --1
// 2 1 3 --2
// 1 2 3 --3
