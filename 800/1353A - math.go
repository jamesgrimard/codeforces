//package main
import (
	"fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var n,m int
		fmt.Scan(&n,&m)
		var x int 
		if n == 1 {
			x= 0
		} else if n == 2 {
			x = m
		} else {
			x= m*2
		}
		fmt.Println(x)
	}
}

