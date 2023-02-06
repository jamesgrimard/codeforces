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
		var r,c,x,y int
		fmt.Fscan(in,&r,&c,&x,&y)
		a:= abs(r-x) + abs(c-y)
		b:= abs(1-x) + abs(1-y)
		a2:= abs(r-x) + abs(1-y) // corner 3
		b2:= abs(1-x) + abs(c-y) //corner 4
		fmt.Fprintln(out,max(max(b2,a2),max(a,b)))
	}
}

func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}

func max(a,b int) int {
	if a >= b {
		return a
	}
	return b
}

// get the coords of each corner
// subtract from cell with escape
// return max ans