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
		var x1,y1,x2,y2 int
		fmt.Fscan(in,&x1,&y1,&x2,&y2)
		if x1 != x2 && y1 != y2 {
			fmt.Fprintln(out,abs(x1-x2) + abs(y1-y2) + 2)
		} else if x1 != x2 {
			fmt.Fprintln(out,abs(x1-x2))
		} else {
			fmt.Fprintln(out,abs(y1-y2))
		}
	}
}

func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}

// Wabbit can move 1 unit to the right, left, up, or down without pulling the box
// changing both x,y axis ie going from 1,1 -> 2,2
// requires wabbit to reposition, in both directions as he leads the box
// therefore return +2 to dx dy