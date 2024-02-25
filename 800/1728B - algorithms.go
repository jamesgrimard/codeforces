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
		if n & 1 == 0 { // even
			for j:=n-2;j>=1;j--{
				fmt.Fprintf(out,"%v ",j)
			}
			fmt.Fprintf(out,"%v %v",n-1,n)
		} else {
			fmt.Fprintf(out,"%v ",1)
			for j:=n-2;j>=2;j--{
				fmt.Fprintf(out,"%v ",j)
			}
			fmt.Fprintf(out,"%v %v",n-1,n)
		}
		fmt.Fprintln(out)
	}
}

// this problem requires you to create a cumulative summation of a permutation which is strictly less than its 
// succeeding elements.
// ending format: [a1, a2, .... 0, n-1, n] this is the reference point for both even and odd length n
// n-1 + n yields largest cumulative summation of permutation
// 1,5,4,3,2,6,7 : start with 1 and count down from n-2 for odds
// 5,4,3,2,1,6,7 : count down from n-2, add n-1, n for even length
