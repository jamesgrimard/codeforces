//package main
import (
	"fmt"
	"strconv"
)
func main() {
	var n int
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var x string
		fmt.Scan(&x)
		first_3:= 0
		last_3:= 0
		for j:=0;j<3;j++{
			z1,_:= strconv.Atoi(string(x[j]))
			first_3+=z1
		}
		for j:=len(x)-3;j<len(x);j++{
			z2,_:= strconv.Atoi(string(x[j]))
			last_3+=z2
		}
		if first_3 == last_3 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
