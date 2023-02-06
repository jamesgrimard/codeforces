//package main
import (
	"fmt"
)
func main() {
	var x,y,answer int
	fmt.Scan(&x,&y)
	if x > y {
		answer= (6-x+1)
	} else {
		answer= (6-y+1)
	}
	switch answer {
	case 1:
		fmt.Println("1/6")
	case 2:
		fmt.Println("1/3")
	case 3:
		fmt.Println("1/2")
	case 4:
		fmt.Println("2/3")
	case 5:
		fmt.Println("5/6")
	default:
		fmt.Println("1/1")
	}
}
