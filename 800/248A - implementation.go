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
	var t,l,r int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var x,y int
		fmt.Fscan(in,&x,&y)
		l += x
		r += y
	}
	fmt.Fprintln(out,min(t-l,l) + min(t-r,r))
}

func max(a,b int) int {
	if a >= b {
		return a
	}
	return b
}
func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}

// find if left side is closer to 0 or t
// find if right side is closer to 0 or t
// take the sum of both min(t-l,0),min(t-r,r)