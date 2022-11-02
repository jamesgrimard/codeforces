//package main
import (
	"fmt"
)
func main() {
	var n int
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var a,tally int
		fmt.Scan(&a)
		for j:=0;j<3;j++{
			var x int
			fmt.Scan(&x)
			if x > a {
				tally++
			}			
		}
		fmt.Println(tally)
	}
}
