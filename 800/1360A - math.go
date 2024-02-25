//package main
import (
	"fmt"
	"math"
)
var t int
func main() {
	fmt.Scan(&t)
	var list [][]int = make([][]int,t)
	for i:=0;i<t;i++{
		var a,b int
		list[i]= make([]int,0,2)
		fmt.Scan(&a,&b)
		list[i]= append(list[i],a,b)
	}
	for i:=0;i<len(list);i+=1{
		if abs(list[i][0]-list[i][1]) == 0 {
			fmt.Println(x_power_y(list[i][0]*2,2))
		} else if abs(list[i][0]-list[i][1]) > list[i][0] || abs(list[i][0]-list[i][1]) > list[i][1] {
			if list[i][0] > list[i][1] {
				fmt.Println(x_power_y(list[i][0],2))
			} else {
				fmt.Println(x_power_y(list[i][1],2))
			}
		} else {
			if abs(list[i][0]-list[i][1]) < list[i][0] || abs(list[i][0]-list[i][1]) < list[i][1] {
				if list[i][0] < list[i][1] {
					fmt.Println(x_power_y(list[i][0],2)*4)
				} else {
					fmt.Println(x_power_y(list[i][1],2)*4)
				}
			}
		}	
	}
}

func x_power_y(x,y int) int {
	//dependencies math
	return int(math.Pow(float64(x),float64(y)))
}

func abs(x int) int {
	var result int
	if x > 0 {
		result = x
	} else {
		if x < 0 {
			result = x*-1
		}
	}
	return result
}