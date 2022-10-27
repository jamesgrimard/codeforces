//package main
import (
	"fmt"
)
func main() {
	var n int
	fmt.Scan(&n)
	var list [][]int = make([][]int,n)
	for i:=0;i<n;i++{
		var x int
		fmt.Scan(&x)
		list[i]= make([]int,x)
		for j:=0;j<x;j++{
			fmt.Scan(&list[i][j])
		}
	}
	for i:=0;i<len(list);i++{
		var diff int = 99999999
		for j:=0;j<len(list[i])-1;j++{
			for k:=j+1;k<len(list[i]);k++{
				if abs(list[i][j] - list[i][k]) < diff {
					diff = abs(list[i][j] - list[i][k])
				}
			}			
		}
		fmt.Println(diff)
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