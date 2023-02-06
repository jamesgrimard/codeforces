//package main
import( 
    "fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Scan(&n)
		var list []int = make([]int,n)
		for j:=0;j<n;j++{
			fmt.Scan(&list[j])
		}
		for k:=0;k<n;k++{
			var x int
			var moves string
			fmt.Scan(&x,&moves)
			counter:=0
			for j:=0;j<x;j++{
				if string(moves[j]) == "D" {
					counter++
				} else {
					counter--
				}
			}
			if list[k]+counter > 9 {
				fmt.Printf("%v ",list[k]+counter-10)
			} else if list[k]+counter < 0 {
				fmt.Printf("%v ",list[k]+counter+10)
			} else {
				fmt.Printf("%v ",list[k]+counter)
			}
			fmt.Println()
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