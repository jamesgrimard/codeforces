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
	fmt.Fscan(in, &t)
	for i:=0;i<t;i++{
		var n int
		fmt.Fscan(in,&n)
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		var sum int
		for k,v := range a {
			sum += v
			if v & 1 == 0 {
				fmt.Fprintln(out,1)
				fmt.Fprintln(out,k+1)
				goto out
			} else if sum & 1 == 0 {
				fmt.Fprintln(out,k+1)
				for j:=1;j<=k+1;j++{
					fmt.Fprintf(out,"%v ",j)
				}
				fmt.Fprintln(out)
				goto out
			}
		}
		fmt.Fprintln(out,-1)
		out:
	}
}

// given a set of integers, find a subset whose summation is even, return the length of subset and the indices
// iterate through the set searching for an even number or the cumulative sum thats even
// once you've found the element or sum return the element index, or print function up to current index repsectively