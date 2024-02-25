//package main

import(
	"fmt"
	//"strings"
	//"os"
	//"sort"
)

var a,tally int
var b string

func main() {

	fmt.Scan(&a,&b)

	for i:=0;i<a;i++{
		if string(b[i]) == "A" {
			tally+=1
		} else {
			tally-=1
		}
	}

	if tally > 0 {
		fmt.Println("Anton")
	} else if tally < 0 {
		fmt.Println("Danik")
	} else {
		fmt.Println("Friendship")
	}

}

