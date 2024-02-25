//package main

import (
	"fmt"
	//"os"
	"sort"
)

var n int
var list []int 


func main() {

	fmt.Scan(&n)

	for i:=0;i<n;i++{
		var holder int
		fmt.Scan(&holder)
		list = append(list,holder)
	}

	sort.Ints(list)

	counter:=0
	for i:=0;i<len(list)-1;i++{
		counter+=list[len(list)-1] - list[i]
	}

	fmt.Println(counter)

}
