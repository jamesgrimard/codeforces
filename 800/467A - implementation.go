//package main

import(
	"fmt"
	//"strings"
	//"os"
	//"sort"
	//"strconv"
	//"math"
)

var a,space int

var list []int

func main() {

	fmt.Scan(&a)

	for i:=0;i<a;i++{
		var x,y int
		fmt.Scan(&x,&y)
		list = append(list, x,y)
	}

	for i:=0;i<len(list);i+=2{
		if list[i+1] - list[i] >= 2 {
			space += 1
		}
	}

	fmt.Println(space)
}

