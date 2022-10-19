//package main

import("fmt")

var a,b,x int

func main() {

	fmt.Scan(&a,&b)

	if a*b == 0 {
		fmt.Println(0)
	} else if a*b % 2 == 0 {
		fmt.Println(a*b/2)
	} else {
		fmt.Println((a*b-1)/2)
	}

}