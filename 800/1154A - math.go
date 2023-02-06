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
	list[]int
	outputs[]int
)

func main() {

	for i:=0;i<4;i++{
	var holder int
	fmt.Scan(&holder)
	list = append(list, holder)
	}


	sort.Ints(list)

	for i:=0;i<len(list)-1;i++{
		outputs = append(outputs, list[3]-list[i])
	}


	for i:=0;i<len(outputs);i++{
		fmt.Printf("%v ",outputs[i])
	}
	// a+b a+c b+c a+b+c



}


