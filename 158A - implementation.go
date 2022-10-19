//package main

import("fmt")

var a,b,c int

var t int = 0

var l []int

func main() {

	fmt.Scan(&a,&b)

	for x:=0;x<a;x++{
		fmt.Scan(&c)
		l = append(l, c)
	}

	for x:=0;x<a;x++{
		if l[x] >= l[b-1] && l[x] != 0{
			t++
		}
	}

	fmt.Println(t)



}