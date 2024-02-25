//package main
import (
	"fmt"
	"math"
)
func main() {
	var x int
	fmt.Scan(&x)
	if x == 1 || x == 2 {
		fmt.Println(1)
	} else {
		accumulator:=0
		for i:=0;i<x;i++{
			accumulator+= int(math.Pow(float64(i),2))-((int(math.Pow(float64(i),2))-i)/2)
			if accumulator > x {
				fmt.Println(i-1)
				break
			}
		}
	}
}

