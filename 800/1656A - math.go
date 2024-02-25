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
		var b,s,ib,is int
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x > b || j == 0 {
				b = x
				ib = j+1
			}
			if x < s || j == 0 {
				s = x
				is = j+1
			}
		}
		if is < ib {
			fmt.Fprintln(out,is,ib)
		} else {
			fmt.Fprintln(out,ib,is)
		}
	}
}

// problem essentially asking to find the two sides of a non-degenerate triangle
// non-degenerate triangle = the sum of 2 of 3 sides must be >= the 3rd side, ie a + b >= c
// we're told that this exists, just take max and min values and print their indexes