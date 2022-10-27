//package main

import (
	"fmt"
	//"os"
	"sort"
)


func main() {

	var n int
	fmt.Scan(&n)

	var list [][]int = make([][]int,n)
	for i:=0;i<n;i++{
		var holder int
		fmt.Scan(&holder)
		list[i] = make([]int,0,holder)
		for j:=0;j<holder;j++{
			var inner_holder int
			fmt.Scan(&inner_holder)
			list[i] = append(list[i], inner_holder)
		}
	}
	
	newlist := duplicate_2d_slice(n, list)

	for i:=0;i<len(list);i++{

		sort.Ints(newlist[i])

		var smallest int = smallest_int(newlist[i])
		var largest int = largest_int(newlist[i])

		var other int
		if smallest != newlist[i][1] {
			other = smallest
		} else {
			other = largest
		}

		for key,value := range list[i] {
			if value == other {
				fmt.Println(key+1)
				break
			}
		}
	}
}


func duplicate_2d_slice(length int, original_slice [][]int) [][]int {
    var newlist [][]int = make([][]int,length)
    for i:=0;i<length;i++{
        newlist[i] = make([]int,0,len(original_slice[i]))
        for j:=0;j<len(original_slice[i]);j++{
            newlist[i] = append(newlist[i], original_slice[i][j])
        }
    }
    return newlist
}

func smallest_int(list []int) int {
    for i:=0;i<len(list);i++{
        if list[0] > list[i] {
            list[0] = list[i]
        }
    }
    return list[0]
}

func largest_int(list []int) int {
    for i:=0;i<len(list);i++{
        if list[0] < list[i] {
            list[0] = list[i]
        }
    }
    return list[0]
}