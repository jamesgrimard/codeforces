//package main

import(
	"fmt"
	//"strings"
	//"os"
	"sort"
)

var n,a,b int
var t int = 0

var tlist []int
var stations []int

func main() {

	fmt.Scan(&n)

	for i:=0;i<n;i++ {
		fmt.Scan(&a,&b)
		stations = append(stations, a,b)
	}

	for j:=0;j<n;j++ {
		if j == 0 {
			t = stations[2*j+1] - stations[2*j]
			tlist = append(tlist, t)
		} else {
			t = t - stations[2*j] + stations[2*j+1] 
			tlist = append(tlist, t)
		}
	}
	
	sort.Ints(tlist)

	fmt.Println(tlist[len(tlist)-1])

}

