//package main

import(
	"fmt"
	//"strings"
	//"os"
	//"sort"
)


var a,b,c,t int

func main() {

	fmt.Scan(&a,&b,&c)
	
	t = ((c*(c+1))/2)*a
	t-=b

	if t < 0 {
		fmt.Println(0)
	} else {
		fmt.Println(t)
	}
	
}
