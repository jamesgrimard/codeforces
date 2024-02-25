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
	var n,q,tally int
	fmt.Fscan(in,&n,&q)
	a:= make([]int,n)
	for j:=0;j<n;j++{
		fmt.Fscan(in,&a[j])
		if a[j] == 1 {
			tally++
		}
	}
	for j:=0;j<q;j++{
		var x,y int
		fmt.Fscan(in,&x,&y)
		if x == 2 {
			if y <= tally {
				fmt.Fprintln(out,1)
			} else {
				fmt.Fprintln(out,0)
			}
		} else {
			a[y-1] ^= 1 
			if a[y-1] == 0 {
				tally--
			} else {
				tally++
			}
		}		
	}
}

// due to time and memory constraints we can't use sort method as problems recommends
// given that the only two digits in the set are 0 & 1 we can tally all the 1's on input
// and can ++ or -- for 1-a[x], because 1-a[x] is either 1 or 0
// then we can print if tally is >= k largest value