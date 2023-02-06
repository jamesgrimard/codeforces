//package main
import( 
    "fmt"
    "math"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var x int
		fmt.Scan(&x)
		for j:=0;j<10;j++{
			if x < x_power_y(10,j+1) {
				fmt.Println(x-x_power_y(10,j))
				break
			}
		}
	}
}
func x_power_y(x,y int) int {
	//dependencies math
	return int(math.Pow(float64(x),float64(y)))
}