//package main
import (
	"fmt"
)
func main() {
	var n int
	fmt.Scan(&n)
	if n == 1 {
		fmt.Println(1)
	} else {
		var table [][]int = make([][]int,n)
		for y:=0;y<n;y++{
			table[y] = make([]int,n)
			for x:=0;x<n;x++{
				if y == 0 || x == 0 {
					table[y][x] = 1
				} else {
					table[y][x] = table[y-1][x]+table[y][x-1]
				}
			}
		}
		fmt.Println(table[n-1][n-1])
	}

}
