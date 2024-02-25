//package main

import (
	"fmt"
	//"os"
	//"bufio"
	//"math"
	//"strings"
	//"sort"
	//"strconv"
)

var (

	n int
	list,count []int

)

func main() {


	fmt.Scan(&n)

	for i:=0;i<n;i++{
		var holder int
		fmt.Scan(&holder)
		list = append(list, holder)
	}

	tally:=0

	for i:=0;i<len(list);i++{

		if list[i] < 0 {
			tally+=list[i]
		} else {
			if list[i] > 0 {
				if tally < 0 {
					count = append(count, tally)
					tally=0
				}
				tally+=list[i]
			}
		}
		if tally < 0 && i == len(list)-1 {
			count = append(count, tally)
			tally=0
		}
	}

	counter:=0
	for i:=0;i<len(count);i++{
		counter+=count[i]
	}

	fmt.Println(counter*-1)
}
