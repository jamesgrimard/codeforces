//package main

import (
	"fmt"
	"os"
	//"sort"
)

var n int
var list []int


func main() {

	fmt.Scan(&n)

	for i:=0;i<n;i++{
		var holder int
		fmt.Scan(&holder)
		list = append(list, holder)
	}

	var programmers []int 
	var runners []int 
	var mathers []int

	for key,value := range list {
		if value == 1 {
			programmers = append(programmers, key)
		} else if value == 2 {
			mathers = append(mathers, key)
		} else {
			runners = append(runners, key)
		}
	}

	smallest := smallest_of_three(len(programmers),len(runners),len(mathers))
	
	if smallest == 0 {
		fmt.Println(0)
		os.Exit(0)
	}
	
	fmt.Println(smallest)
	for i:=0;i<smallest;i++{
		fmt.Printf("%v %v %v\n",programmers[i]+1,mathers[i]+1,runners[i]+1)
	}

}

func smallest_of_three(x,y,z int) int {
	if x <= y {
		if x <= z {
			return x
		}
	} else {
		if y <= z {
			return y
		} 
	}
	return z
}