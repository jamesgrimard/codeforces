//package main

import(
	"fmt"
	//"strings"
	//"os"
	//"sort"
	"strconv"
	//"math"
)

var n int
var list = make([]int,n)

func main() {

	fmt.Scan(&n)

	for i:=0;i<n;i++{
		var x int
		fmt.Scan(&x)
		list = append(list, x)
	}

	output := make([]int,n)

	for i := range list {

		for k:=0;k<len(list);k++{
			if list[i] == k+1 {
				output[k] = i+1
			}
		}
	}
	

	var z string

	for i:=0;i<len(output);i++{
		z+=strconv.Itoa(output[i])+" "	
	}

	fmt.Println(z)

	

}

