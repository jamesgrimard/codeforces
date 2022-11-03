//package main
import( 
    "fmt"
)
func main() {
	var n,start,distressed int
	fmt.Scan(&n,&start)
	for i:=0;i<n;i++{
		var x int
		var sign string
		fmt.Scan(&sign,&x)
		if sign == "-" {
			x*=-1
		}
		if abs(x) > start && x < 0 {
			distressed++
		} else {
			start+=x
		}
	}
	fmt.Println(start,distressed)
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