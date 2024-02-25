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
	fmt.Fprintln(out,max(abs(x1-x2),abs(y1-y2)))
	
}
func abs(a int) int {
	if a<0 {
		return a * -1
	}
	return a
}
func max(a,b int) int{
	if a>=b{
		return a
	}
	return b
}

// furthest point is the abs difference between axis'
// ie, x2 - x1, y2 - y1
// take the max of these two values to get the shortest travel distance
// this because the robot can travel in a diagonal