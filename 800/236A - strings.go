//package main

import(
	"fmt"
	"strings"
	//"os"
	//"sort"
)

var a string

var b []string

func main() {

	fmt.Scan(&a)

	for i:=0;i<len(a);i++ {
		if strings.Contains(strings.Join(b, ""), string(a[i])) != true {
			b = append(b, string(a[i]))
		}
	}
	
	if len(b) % 2 == 0 {
		fmt.Println("CHAT WITH HER!")
	} else {
		fmt.Println("IGNORE HIM!")
	}
	
}
