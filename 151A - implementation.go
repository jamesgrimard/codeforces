//package main

import (
	"fmt"
	"sort"
)
var n, k, l, c, d, p int

var nl, np int

var list[]int

func main() {

	fmt.Scan(&n, &k, &l, &c, &d, &p, &nl, &np)

	var total_ml int = k*l

	var total_slices_lime int = c*d

	list = append(list, total_ml/nl,total_slices_lime,p/np)
	
	sort.Ints(list)

	fmt.Println(int(list[0]/n))

}