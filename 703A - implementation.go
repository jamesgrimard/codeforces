//package main

import (
	"fmt"
	//"os"
	//"sort"
	//"strconv"
	//"math"
	//"bufio"
)

var n int

func main() {

	fmt.Scan(&n)

	score:=0

	for i:=0;i<n;i++{
		var holder1,holder2 int
		fmt.Scan(&holder1,&holder2)
		if holder1 - holder2 > 0 {
			score++
		} else {
			if holder1 - holder2 < 0 {
				score--
			}
		}
	}

	if score > 0 {
		fmt.Println("Mishka")
	} else if score < 0 {
		fmt.Println("Chris")
	} else {
		fmt.Println("Friendship is magic!^^")
	}

}


