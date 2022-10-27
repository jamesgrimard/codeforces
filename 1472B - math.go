//package main
import (
	"fmt"
)
func main() {
	var n,x,y int
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		fmt.Scan(&x)
		var tally_1,tally_2 int
		for j:=0;j<x;j++{
			fmt.Scan(&y)
			if y == 1 {
				tally_1++
			} else {
				tally_2++
			}
		}
		if tally_1 % 2 != 0 {
			fmt.Println("NO")
		} else if tally_2 % 2 != 0 {
			if tally_1 == 0 {
				fmt.Println("NO")
			} else {
				fmt.Println("YES")
			}
		} else {
			fmt.Println("YES")		
		}
	}
}
