//package main

import(
	"fmt"
	//"strings"
	//"os"
	//"sort"
)

var a int
var b string
var c int = 0

func main() {

	fmt.Scan(&a,&b)
	
	for i := range b {
		if i != 0 {
			if b[i] == b[i-1] {
				c++
			} 		
		}
	}
	fmt.Println(c)
}
