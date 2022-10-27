//package main

import (
	"fmt"
	//"strconv"
	//"os"
	//"bufio"
	//"math"
	//"strings"
	//"sort"
)

var (

	n,k int
	list [] int
)

func main() {

	fmt.Scan(&n,&k)

	for i:=0;i<n;i++{
		var holder int
		fmt.Scan(&holder)
		list = append(list,holder)
	}

	for i:=0;i<len(list);i++{
		if k + list[i] > 5 {
			delete_element(i,list)
			i--
			list = list[:len(list)-1]
		}
	}

	if len(list) < 3 {
		fmt.Println(0)
	} else if len(list) % 3 == 0 {
		fmt.Println(len(list)/3)
	} else {
		fmt.Println(int(len(list)/3))
	}
	
}

func delete_element(location int, list []int) []int {
    return append(list[:location], list[location+1:]...) 
}