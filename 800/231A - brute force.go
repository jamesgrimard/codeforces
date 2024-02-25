//package main

import("fmt")

var x,y,z,t,a int

func main() {

	fmt.Scan(&a)

	for i:=0;i<a;i++{
		fmt.Scan(&x,&y,&z)
		if x+y+z >= 2{
			t++
		}
	}

	fmt.Println(t)

}