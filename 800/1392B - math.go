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
		for j:=0;j<n;j++ {
			fmt.Fscan(in,&a[j])
		}
		if k & 1 == 1 {
			k = 1
		} else {
			k = 2
		}
		for j:=0;j<k;j++{
			var max int
			for r:=0;r<n;r++{
				if a[r] > max || r == 0 {
					max = a[r]
				}
			}
			for l:=0;l<n;l++{
				a[l] = max - a[l]
			}
		}
		for j:=0;j<n;j++{
			fmt.Fprintf(out,"%v ",a[j])
		}
		fmt.Fprintln(out)
	}
}

// iterate through list and to find max
// subtract a[i] from the max to get the difference, k times
// if k is even, only do twice, else just do k once, ie: if k%2 = 0 k == 2, if k%2 != 0 k == 1
// this will save time with constaints