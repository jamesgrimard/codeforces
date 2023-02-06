//package main

import(
	"fmt"
	//"strings"
	//"os"
	//"sort"
)

var a,b int

func main() {

	fmt.Scan(&a,&b)

	for i:=0;i<b;i++{
		if a % 10 == 0 {
			a/=10
		} else {
			a-=1
		}
	}
	fmt.Println(a)
}

