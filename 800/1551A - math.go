//package main
import (
	"fmt"
)
func main() {
	var x int
	fmt.Scan(&x)
	for i:=0;i<x;i++{
		var n int
		fmt.Scan(&n)
		if n == 0 {
			fmt.Println(0,0)
		} else if n % 3 == 0 {
			fmt.Println(n/3,n/3)
		} else if (float64(n)/3) - float64(int(n/3)) <= 0.34 {
			fmt.Println(int(n/3)+1,int(n/3))
		} else {
			fmt.Println(int(n/3),int(n/3)+1)
		}
	}
}
