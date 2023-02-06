//package main

import("fmt")

var a int
var c int = 0

func main() {

	fmt.Scan(&a)

	for i:=0;i<a;i++{
		var b string
		fmt.Scan(&b)
		if b == "++X" || b == "X++" {
			c++
		}
		if b == "--X" || b == "X--" {
			c--
		}
	}
	fmt.Println(c)
}
