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
	var n,k int
	fmt.Fscan(in,&n,&k)
	var a,b,c int = 2,5,8
	a *= n
	b *= n
	c *= n

	if a % k != 0 {
		a = (a / k) + 1
	} else {
		a /= k
	}
	if b % k != 0 {
		b = (b / k) + 1
	} else {
		b /= k
	}
	if c % k != 0 {
		c = (c / k) + 1
	} else {
		c /= k
	}
	fmt.Fprintln(out,a+b+c)
}

// probably more efficient to create array as [2 5 8]
// and just iterate changes over array rather than ugly logic statements