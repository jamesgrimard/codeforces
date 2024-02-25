//package main
import(
	"fmt"
	//"math"
)

var n int
var x float64 = 0.0

func main() {

	fmt.Scan(&n)

	var list = make([]int,n)

	for i:=0;i<n;i++{
		fmt.Scan(&list[i])
	}

	for i:=0;i<n;i++{
		g:=float64(n)
		x += (float64(list[i]) / 100.0) * float64((1/g))
	}

	fmt.Println(x*100)
}

