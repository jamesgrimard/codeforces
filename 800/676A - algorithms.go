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
	var t,min,max int
	fmt.Fscan(in,&t)
	a:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
		if a[i] == 1 {
			min = i+1
		} else if a[i] == t {
			max = i+1
		}
	}
	fmt.Fprintln(out,t-1-minor(minor(abs(1-min),abs(t-min)),minor(abs(1-max),abs(t-max))))
}
func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}
func minor(a,b int) int {
	if a <= b {
		return a
	}
	return b
}

// get the index of n and 1 with the inputs
// take the absolute value of: n - 1, n - t && 1 - 1, 1 - t
// take the min of each pair to find the shortest distance to an edge
// then take the min of those two results to find the anchor, subtract the anchor from n-1 to get furthest pair
// ultimately what you're doing is finding the element thats closest to an edge, and finding the furthest edge