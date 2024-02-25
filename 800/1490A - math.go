//package main
import( 
    "fmt"
    "math"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Scan(&n)
		var list []int = make([]int,n)
		for j:=0;j<n;j++{
			fmt.Scan(&list[j])
		}
		counter:=0
		for j:=0;j<n-1;j++{
			if min(list[j],list[j+1])*2 < max(list[j],list[j+1]) {
				for k:=1;k<max(list[j],list[j+1]);k++{
					min_:= min(list[j],list[j+1])
					max_:= max(list[j],list[j+1])
					min_*= x_power_y(2,k)
					if max(list[j],list[j+1])%2!=0{
						if min_ > max_/2 {
							counter+=k
							break
						}
					} else {						
						if min_ >= max_/2 {
							counter+=k
							break
						}						
					}
				}
			}
		}
		fmt.Println(counter)
	}
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
func max (x,y int) int {
	if x>y{
		return x
	} else {
		return y
	}
}
func min (x,y int) int {
	if x<y{
		return x
	} else {
		return y
	}
}
func x_power_y(x,y int) int {
	//dependencies math
	return int(math.Pow(float64(x),float64(y)))
}