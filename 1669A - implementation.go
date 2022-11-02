//package main
import (
	"fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++ {
		var x int
		fmt.Scan(&x)
		if x >= 1900 {
			fmt.Println("Division 1")
		} else if x >= 1600 && x <= 1899 {
			fmt.Println("Division 2")
		} else if x >= 1400 && x <= 1599 {
			fmt.Println("Division 3")
		} else {
			fmt.Println("Division 4")
		}
	}
}