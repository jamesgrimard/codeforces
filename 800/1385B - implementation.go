//package main
import (
	"fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var n int 
		fmt.Scan(&n)
		var list []int
		for j:=0;j<n*2;j++{
			var x int
			fmt.Scan(&x)
			tally:=0
			for k:=0;k<len(list);k++{
				if list[k] == x {
					tally++
				}
			}
			if tally == 0 {
				list = append(list, x)
			}
		}
		for j:=0;j<len(list);j++{
			fmt.Printf("%v ",list[j])
		}
		fmt.Println()
	}
}
