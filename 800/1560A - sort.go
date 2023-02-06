//package main

import (
	"fmt"
	//"os"
	//"sort"
	"strconv"
	"math"
)

var n int
var list []int

func main() {

	fmt.Scan(&n)

	for i:=0;i<n;i++{
		var holder int
		fmt.Scan(&holder)
		list = append(list, holder) 
	}

	for i:=0;i<len(list);i++{

		m := make(map[int]int)

		tally:=1
		for j:=1;tally<=list[i];j++{
			if j%3 != 0 && last_digit(j) != 3 && j%10!=3 {
				m[tally] = j
				tally++
			}
		}
		fmt.Println(m[list[i]])
	}

}

func x_power_y(x,y int) int {
	//dependencies math
	return int(math.Pow(float64(x),float64(y)))
}

func last_digit(x int ) int {
	// dependencies: strconv,math
	x_len := len(strconv.Itoa(x))
	if x_len <= 1 {
		return x
	}
	var x_first_digit int = x/x_power_y(10,x_len-1)
	return x % (x_first_digit * x_power_y(10,x_len-1))
}

func largest_int(list []int) int {
    for i:=0;i<len(list);i++{
        if list[0] < list[i] {
            list[0] = list[i]
        }
    }
    return list[0]
}