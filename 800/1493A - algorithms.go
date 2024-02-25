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
		fmt.Fprintln(out, n - (k-1)/2 - 1)
		for j:=(k-1)/2+1;j<=n;j++{
			if j != k {
				fmt.Fprintf(out,"%v ",j)
			}
		}
		fmt.Fprintln(out)
	}
}

// create an array of n distinct integers
// constraint: no subset or the sum of a subset can't equal k
// sort to an ascending array from 1 to n
// find k, and remove the lowest summands.
// ie: n,k = 7,5 -> 1 2 3 4 5 6 7
// all summands of k: (1+4),(2+3) and remove lowest (1,2)
// finally, remove subset k from array
// [3 4 6 7]
// removing summands can be represented mathimatically with (k-1) / 2 