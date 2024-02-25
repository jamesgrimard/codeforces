//package main
import(
	"fmt"
	//"math"
	//"strings"
	//"os"
)

var inputs []int


func main() {

	for i:=0;i<5;i++{
		var a int
		fmt.Scan(&a)
		inputs = append(inputs, a)
	}

	var list = make([]int,inputs[4])

	for i:=0;i<len(inputs)-1;i++{

		for j:=inputs[i]-1;j<inputs[4];j+=inputs[i]{
			
			list[j] = 1
		}
	}

	var tally = inputs[4]

	for i:=0;i<len(list);i++{
		if list[i] == 0 {
			tally--
		}
	}

	fmt.Println(tally)
}


