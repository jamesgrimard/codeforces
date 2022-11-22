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
		if (n < 3 || n-k <= n/2) && k != 0 {
			fmt.Fprintln(out,-1)
			continue
		}
		var marker int
		for j:=1;j<=n/2;j++{
			if k == 0 {
				marker = j
				goto out
			}
			fmt.Fprintf(out,"%v %v ",j,n+1-j)
			k--
		}
		if n & 1 == 1 {
			fmt.Fprintf(out,"%v",n/2+1)
		}
		fmt.Fprintln(out)
		continue
		out:
		for j:=marker;j<=n+1-marker;j++{
			fmt.Fprintf(out,"%v ",j)
		}
		fmt.Fprintln(out)
	}
}

// arrange a permutation of size n, with only* k peaks
// a peak is an indice that isn't on the edge ie; i != 1 or n-1 and is greater than its adjacents
// n,k = 5,2 	[1 4^ 3 5^ 2] 	^ = peak
// sort array: pair smallest with largest: [1 5^ 2 4^ 3] j,n+1-j
// if n is < 3 or if k is >= n/2; return -1. Impossible to get >= n/2 peaks 
// the trick with this problem is that each permuatation must only have k peaks, no more or less
// therefore deduce each peak from k and if k == 0 arrange remainder elements if ascending order