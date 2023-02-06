//package main
import( 
    "fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var x int
		fmt.Scan(&x)
		if abs(x) == 2 {
			fmt.Println(1)
		} else if abs(x) == 4 || abs(x) == 1 {
			fmt.Println(2)
		} else if x%3 == 2 {
			fmt.Println(x/3+1)
		} else if x%3 == 1 {
			fmt.Println(x/3+1)
		} else if x%3 == 0 {
			fmt.Println(x/3)
		} else {
			fmt.Println(0)
		}
	}
}
func abs(x int) int {
	var result int
	if x > 0 {
		result = x
	} else {
		if x < 0 {
			result = x*-1
		}
	}
	return result
}