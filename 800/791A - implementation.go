//package main

import(
	"fmt"
	//"strings"
	"os"
	//"sort"
)

var a,b int 

var years int = 0

func main() {


	fmt.Scan(&a,&b)

	for {
		// var a,b int = a*3,b*2 THIS WASNT WORKING BECAUSE OF 'VAR'. VAR DECLARSE NEW VAR AND WONT USE PRIOR DECLARED
		a,b = a*3,b*2
		years++
		if a > b {
			fmt.Println(years)
			os.Exit(0)
		}
	}
}
