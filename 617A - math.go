//package main

import(
	"fmt"
	//"strings"
	//"os"
	//"sort"
)

var a int

func main() {


	fmt.Scan(&a)

	if a <= 5 {
		fmt.Println(1)
	} else if a % 5 == 0 {
		fmt.Println(a/5)
	} else {
		fmt.Println(int(a/5)+1) 
	}
}
