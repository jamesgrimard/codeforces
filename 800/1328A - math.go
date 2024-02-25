//package main
import(
	"fmt"
	//"math"
	//"strings"
	//"os"
)

//var n int

var inputs,outputs []int

func main() {

	fmt.Scan(&n)
	for i:=0;i<2*n;i++{
		var x int
		fmt.Scan(&x)
		inputs = append(inputs, x)
	}

	for i:=0;i<2*n;i+=2{

		if inputs[i] % inputs[i+1] == 0 {
			outputs = append(outputs, 0)
		} else if inputs[i] < inputs[i+1]{
			temp_value := inputs[i+1]-inputs[i]
			outputs = append(outputs, temp_value)
		} else {
			temp_value_x := inputs[i]
			temp_value_y := inputs[i+1]
			outputs = append(outputs, (temp_value_x+temp_value_y) - (temp_value_x%temp_value_y) - temp_value_x)
		}
	}

	for i:=0;i<len(outputs);i++{
		fmt.Printf("%v\n",outputs[i])
	}

}


