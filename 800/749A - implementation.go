//package main
import (
	"fmt"
)
func main() {
	var x int
	fmt.Scan(&x)
	fmt.Println(x/2)
	if x % 2 == 0 {
		for i:=0;i<(x/2);i++{
			fmt.Printf("%v ",2)
		}
	} else {
		for i:=0;i<(x/2);i++{
			if i == x/2-1 {
				fmt.Printf("%v",3)
			} else {
				fmt.Printf("%v ",2)
			}
		}
	}
}
