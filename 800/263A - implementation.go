//package main

import(
	"fmt"
	"math"
)

var m int = 0

func main() {

	for x:=0;x<5;x++{
		for y:=0;y<5;y++{
			var a int
			fmt.Scan(&a)
			if a == 1 {
				m = int(math.Abs(float64(x - 2))) + m
				m = int(math.Abs(float64(y - 2))) + m
			}
		}
	}
	fmt.Println(m)
}
