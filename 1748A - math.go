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
		if n & 1 == 1 {
			fmt.Fprintln(out,(n-1)/2 + 1)
		} else {
			fmt.Fprintln(out,(n-2)/2 + 1)
		}
	}
}

// set of numbers n, presents as follows: 1,1,2,2,3,3,4,4,5,5....
// to find the max height we can pair smaller elements and set the reference points as the largest
// ie: 5,5,4&1,4&1,3&2,3&2
// formula as follows if n is odd : (n - 1) / 2 +1
// else : (n - 2) / 2 + 2