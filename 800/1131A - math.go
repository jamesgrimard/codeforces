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
	var x1,y1,x2,y2 int
	fmt.Fscan(in,&x1,&y1,&x2,&y2)
	a:= max(x1,x2)*2
	b:= (y1 + y2) * 2
	fmt.Fprintln(out,(a+b)+4)
}
func max(a,b int) int {
	if a >= b {
		return a
	}
	return b
}

// given that the squares stack on eachother, sum y1 & y2
// take the max of the x values * 2 + sum(y1,y2) * 2 } + 4
// return total