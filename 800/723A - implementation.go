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

var (
	tally int
	list []int
)

func main() {

	for i:=0;i<3;i++{
		var holder int
		fmt.Scan(&holder)
		list = append(list, holder)
	}

	sort.Ints(list)

	if list[2]-list[1] > list[1]-list[0] {
		tally = (list[1]-list[0]) + (list[2]-list[1])
	} else if list[2]-list[1] < list[1]-list[0] {
		tally = (list[2]-list[1]) + (list[1]-list[0])
	} else {
		if list[2]-list[1] == list[1]-list[0] {
			tally = (list[2]-list[1])+(list[1]-list[0])
		}
	}

	fmt.Println(tally)

}


