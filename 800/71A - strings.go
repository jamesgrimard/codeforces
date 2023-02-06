//package main

import(
	"fmt"
)

var i int

var a = make([]string,0,i)

func take_inputs() {
	fmt.Scan(&i)
	for k:=0;k<i;k++ {
		var inputs string
		fmt.Scan(&inputs)
		a = append(a,inputs)
	}
}

func iterate() {

	for j := range a {
		if len(a[j]) <= 10 {
			fmt.Println(a[j])
		} else {
			var first_letter,last_letter,length_minus_2 = string(a[j][0]), string(a[j][len(a[j])-1]), len(a[j])-2
			fmt.Printf("%v%v%v\n",first_letter,length_minus_2,last_letter)
		}
	}
}

func main() {

	take_inputs() 

	iterate()

}