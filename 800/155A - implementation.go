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
	n,max,min,tally int
	contests []int
)

func main() {

	fmt.Scan(&n)

	for i:=0;i<n;i++{
		var holder int
		fmt.Scan(&holder)
		contests = append(contests, holder)
	}

	max,min = contests[0],contests[0]

	// 100 50 200 150 200

	for i:=0;i<n;i++{

		if contests[i] > max || contests[i] < min {
			tally++
			if contests[i] > max {
				max = contests[i]
			} else {
				min = contests[i]
			}
		}
	}

	fmt.Println(tally)

}
