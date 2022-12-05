//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
)
type Pair struct {
	school int
	dmg int
}
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var y_c,b_c,y,g,b int
	fmt.Fscan(in,&y_c,&b_c,&y,&g,&b)
	r_y:= y * 2 + g 
	r_y -= y_c
	r_b:= b * 3 + g
	r_b -= b_c
	fmt.Fprintln(out,max(0,r_y)+max(r_b,0))
}
func max(a,b int) int {
	if a>=b{
		return a
	}
	return b
}
// yellow: 2 yellow crystal
// green: 1 yellow, 1 blue
// blue: 3 blue