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
	list,tally []int
)

func main() {

	fmt.Scan(&n)

	for i:=0;i<n;i++{
		var holder int 
		fmt.Scan(&holder)
		list = append(list, holder)
	}

	for i:=0;i<len(list);i++{
		if list[i] <= 2 { 		
			tally = append(tally, 0)
		} else if list[i] % 2 == 0 { // evens
			tally = append(tally, ((list[i] - 2) /2))
		} else { // odds
			tally = append(tally, ((list[i] - 1) /2))
		}
	}

	for i:=0;i<len(tally);i++{
		fmt.Printf("%v\n",tally[i])
	}

}
