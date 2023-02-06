//package main

import (
	"fmt"
	//"strconv"
	//"os"
	//"bufio"
	//"math"
	//"strings"
	"sort"
)

var output []string

func main() {

	var y int
	fmt.Scan(&y)

	var list [][]int = make([][]int,y)
	for i:=0;i<y;i++{
		var x int
		fmt.Scan(&x)
		list[i] = make([]int,0,x)
		for j:=0;j<x;j++{
			var x_holder int
			fmt.Scan(&x_holder)
			list[i] = append(list[i], x_holder)
		}
	}

	for i:=0;i<len(list);i++{
		sort.Ints(list[i])
	}

	for i:=0;i<len(list);i++{
		for {
			if len(list[i]) == 1 {
				break
			}
			if len(list[i]) == 2 {
				if list[i][0] == list[i][1] {
					break
				} else if abs(list[i][0]-list[i][1]) <= 1 {
					list[i] = delete_element(0, list[i])
				} else {
					break
				}
			} else {
				if abs(list[i][0]-list[i][1]) <= 1 {
					list[i] = delete_element(0, list[i])
				} else {
					break
				}
			}
	
		}
	}

	for i:=0;i<len(list);i++{
		if len(list[i]) == 1 {
			output = append(output, "YES")
		} else if list[i][0] == list[i][1]{
			output = append(output, "YES")
		} else {
			output = append(output, "NO")
		}
		
	}

	for i:=0;i<len(output);i++{
		fmt.Printf("%v\n",output[i])
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

func delete_element(location int, list []int) []int {
    return append(list[:location], list[location+1:]...) 
}