//package main
import (
	"fmt"
	"math"
	"strconv"
)
func main() {
	var n int
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var x int
		fmt.Scan(&x)
		if x < 10 {
			fmt.Println(x)
		} else {
			var x_str string = strconv.Itoa(x)
			var first_digit string = string(x_str[0])
			var len int = len(x_str)
			var base string
			for j:=0;j<len;j++{
				base+=first_digit
			}
			base_int,_ := strconv.Atoi(base)
			if x >= base_int {
				fmt.Println((9*len) - (9-int(x/x_power_y(10,len-1))))
			} else {
				fmt.Println((9*len) - (9-int(x/x_power_y(10,len-1)))-1)
			}
		}
	}
}

func x_power_y(x,y int) int {
	//dependencies math
	return int(math.Pow(float64(x),float64(y)))
}