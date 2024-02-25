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
		var l,r int
		fmt.Fscan(in,&l,&r)
		if r % 2 == 0 {
			fmt.Fprintln(out,r/2,r)
		} else {
			fmt.Fprintln(out,(r-1)/2,r-1)
		}
	}
}

// the range of l:r must be atleast >= r/2, otherwise there would be no answers.
// given that, we can check if r is even with % 2 and return r/2 and r
// or if odd we can subtract 1 from r and return r-1 / 2, r-1