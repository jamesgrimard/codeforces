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
		var m,x,y int
		fmt.Fscan(in,&m,&x,&y)
		fmt.Fprintln(out,min(m / 1 * x,m / 2 * y + ((m % 2) * x)))
	}
}

func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}

// ultimately, the problem requires us to find the least costly filling of a bucket
// given two costs, x & y, and the required fill amount m
// it costs x to fill 1 unit
// it costs y to fill 2 units
// divide each by the fill amount m, and multiply by the cost for each respectively
// if fill amount is odd use m % 2 * x
// else m / x,y * x,y + m%2*x