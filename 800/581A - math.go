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

	x,y int
	out1,out2 int

)

func main() {

	fmt.Scan(&x,&y)

	switch {
	case x<y:
		out1=x
		out2=(y-x)/2
	case y<x:
		out1=y
		out2=(x-y)/2
	default:
		out1,out2 = x,0
	}

	fmt.Printf("%v %v",out1,out2)
	
}
