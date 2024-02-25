//package main

import(
	"fmt"
	"strings"
	//"os"
	//"sort"
)

var a string
var b int = 0

func main() {

	fmt.Scan(&a)

	for i:=0;i<len(a);i++ {
		if string(a[i]) == strings.ToUpper(string(a[i])) {
			b++
		}
	}

	if (b > len(a)/2) {
		fmt.Println(strings.ToUpper(a))
	} else {
		fmt.Println(strings.ToLower(a))
	}

}

