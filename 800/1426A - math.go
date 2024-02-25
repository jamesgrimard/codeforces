//package main
import (
	"fmt"
)
func main() {
	var n int
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var x,y int
		fmt.Scan(&x,&y)
		if x == 1 || x == 2 {
			fmt.Println(1)
		} else if isIntegral((float64(x)+(float64(y)-2))/float64(y)) == true {
			fmt.Println(((x+(y-2))/y))
		} else {
			fmt.Println(((x+(y-2))/y)+1)
		}
	}
}
func isIntegral(val float64) bool {
	return val == float64(int(val))
}
