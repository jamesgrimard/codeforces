//package main

import (
	"fmt"
	//"strconv"
	"os"
	"bufio"
	//"math"
	//"strings"
	//"sort"
)


var (
	n int
	in = bufio.NewReader(os.Stdin)
)

func main() {

	fmt.Scan(&n)

	for i:=0;i<n;i++{
		var holder1,holder2 int
		fmt.Fscan(in, &holder1, &holder2)
		if  holder1 == holder2 {
			fmt.Println(0)
		} else {
			fmt.Println((abs(holder1 - holder2)+9)/10)
		}

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
