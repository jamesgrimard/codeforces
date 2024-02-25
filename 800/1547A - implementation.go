//package main
import( 
    "fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var ax,ay int
		fmt.Scan(&ax,&ay)
		var bx,by int 
		fmt.Scan(&bx,&by)
		var cx,cy int
		fmt.Scan(&cx,&cy)
		if ax == bx && ax == cx {
			if cy > min(ay,by) && cy < max(ay,by) {
				fmt.Println(abs(ay-by)+2)
				continue
			}
		} else if ay == by && ay == cy {
			if cx > min(ax,bx) && cx < max(ax,bx) {
				fmt.Println(abs(ax-bx)+2)
				continue
			}
		}
		fmt.Println(abs(ax-bx)+abs(ay-by))
	}
}
func abs(x int) int {
	var result int
	if x > 0 {
		result = x
	} else {
		if x < 0 {
			result = x*-1
		}
	}
	return result
}
func min (x,y int) int {
	if x>y{
		return y
	} else {
		return x
	}
}
func max (x,y int) int {
	if x>y{
		return x
	} else {
		return y
	}
}
