//package main

import(
	"fmt"
	//"strings"
	//"os"
	//"sort"
)

var a,b,output string
var list []string

func main() {

	fmt.Scan(&a,&b)

	for i:=0;i<len(a);i++{
		list = append(list, string(a[i]))
	}

	for i:=len(a)-1;i>=0;i--{
		output+=string(list[i])
	}

	if output == b {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}

