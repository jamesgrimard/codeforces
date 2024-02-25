//package main
import (
	"fmt"
)
func main() {
	var n int
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var x int
		fmt.Scan(&x)
		if x % 2 == 0 {
			fmt.Println(x/2)
		} else {
			fmt.Println((x+1)/2)
		}
	}
}
