//package main
import (
	"fmt"
)

var n int

func main() {

	fmt.Scan(&n)
	var list [][]int = make([][]int,0,n)
	for i:=0;i<n;i++{
		var holder int
		fmt.Scan(&holder)
		var list_holder []int
		for j:=0;j<holder;j++{
			var holder_inner int
			fmt.Scan(&holder_inner)
			list_holder = append(list_holder, holder_inner)
		}
		list = append(list, list_holder)
	}
	for i:=0;i<len(list);i++{ // checking if list is bad
		var odds int = 0
		for j:=0;j<len(list[i]);j++{
				if list[i][j] % 2 != 0 {
					odds++
				}
			}
		if len(list[i])%2 == 0 {
			if odds != len(list[i])/2 {
				fmt.Println(-1)
				continue
			}
		} else {
			if odds != int(len(list[i])/2) {
				fmt.Println(-1)
				continue
			}
		}
		var tally int = 0 // tally of evens in the right place
		for j:=0;j<len(list[i]);j++{
			if list[i][j] % 2 == j % 2 {
				tally++
			}
		}
		fmt.Println((len(list[i])-tally)/2)
	}
}


