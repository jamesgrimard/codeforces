//package main

import(
	"fmt"
	//"strings"
	//"os"
	//"sort"
	//"strconv"
	//"math"
)

var a,b int
var c,d []int
func main() {

	fmt.Scan(&a,&b)

	for i:=0;i<a;i++{
		var d int
		fmt.Scan(&d)
		c = append(c,d)
	}

	for i:=0;i<len(c);i++{
		if c[i] <= b {
			d = append(d,c[i])
		}
	}

	length:=(len(c)-len(d))*2

	length+=len(d)

	fmt.Println(length)
}

