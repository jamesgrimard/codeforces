//package main

import (
	"fmt"
	"strconv"
	//"os"
	//"bufio"
	"math"
	//"strings"
	//"sort"
)

var (
	n int
	list[] int
)

func main() {

	fmt.Scan(&n)

	for i:=0;i<n;i++{
		var holder int
		fmt.Scan(&holder)
		list = append(list,holder)
	}

	for i:=0;i<len(list);i++{
		out:=all_digit_blocks(list[i])
		fmt.Println(len(out))
		for j:=0;j<len(out);j++{
			fmt.Printf("%v ",out[j])
		}
		fmt.Println()
	}	
}

func x_power_y(x,y int) int {
	return int(math.Pow(float64(x),float64(y)))
}

func first_digit_block(x int) int {
	x_len := len(strconv.Itoa(x))
	x_first_digit:= x/x_power_y(10,x_len-1)
	return x_first_digit * x_power_y(10,x_len-1)
}

func all_digit_blocks(x int) []int {
	var this_list []int
	var total int = x
	for i:=0;i<len(strconv.Itoa(x));i++{
		x_len := len(strconv.Itoa(total))
		x_first_digit := total/x_power_y(10,x_len-1)	
		digit_block := x_first_digit * x_power_y(10,x_len-1)
		if digit_block == 0 {
			break
		}
		this_list = append(this_list,digit_block)
		total = total-digit_block
	}
	return this_list
}