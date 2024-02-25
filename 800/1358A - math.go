//package main
import (
	"fmt"
)
func main() {
	var n int
	fmt.Scan(&n)
	for i :=0;i<n;i++{
		var x,y int
		fmt.Scan(&x,&y)
		if (x*y)%2 == 0 {
			fmt.Println(x*y/2)
		} else {
			fmt.Println(x*y/2+1)
		}
	}
}

