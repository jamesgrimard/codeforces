//package main
import (
	"fmt"
	"math"
)
func main() {
	var n int
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var x int
		fmt.Scan(&x)
		if x == 2 {
			fmt.Println(2)
		} else {
			sum_tally1:=0
			sum_tally2:=0
			for j:=1;j<x/2;j++{
				power:=x_power_y(2,j)
				sum_tally1+=power
			}
			for j:=(x/2);j<=x;j++{
				power:=x_power_y(2,j)
				sum_tally2+=power
				if j==x{
					sum_tally2-=power
					sum_tally1+=power
				}
			}
			fmt.Println(sum_tally1-sum_tally2)
		}
	}
}
func x_power_y(x,y int) int {
	//dependencies math
	return int(math.Pow(float64(x),float64(y)))
}
