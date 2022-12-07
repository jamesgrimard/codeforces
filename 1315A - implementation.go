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
	for i:=0;i<t;i++ {
		var x1,y1,x2,y2 int
		fmt.Fscan(in,&x1,&y1,&x2,&y2)
		
		a:= max((x1 - (x2+1))*y1, (y1 - (y2+1))*x1)
		b:= max(x1 * y2 , y1 * x2)

		fmt.Fprintln(out,max(a,b))

	}
	
}
func max(a,b int) int {
	if a >= b {
		return a
	}
	return b
}

// given 2 different types of inputs, w * h and Xcell,Ycell
// don't confuse the w,h as being the same as X,Y. ie: 10,10 4,9
// 4,9 is actually == 5,10
// given these differences, you need to find the max rectangle  under or above (whichever is largest)  of the X,Y cell coord
// first, calculate all possible rectangles above the x,y cell
// find the max of these, (w - (x+1)) * h , (h - (y+1)) * w
// then find the largest rectangle under the x,y cell
// max, w * y, h * x