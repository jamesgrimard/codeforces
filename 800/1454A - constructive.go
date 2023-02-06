//package main
import (
	"fmt"
)
func main() {
	var n int
	fmt.Scan(&n)
	for i :=0;i<n;i++{
		var x int
		fmt.Scan(&x)
		fmt.Printf("%v ",x)
		for j:=1;j<x;j++{
			fmt.Printf("%v ",j)
		}
		fmt.Println()
	}
}

