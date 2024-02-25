//package main

import(
	"fmt"
	//"strings"
	"os"
	//"sort"
	"strconv"
	"math"
)

var a,tally int

func main() {

	fmt.Scan(&a)

	for i:=1;i<9000;i++{

		tally = 0

		a+=1

		b := spaced_int_slice(a) 

		for j:=0;j<len(b);j++{	// [_ 9 8 8]

			for k:=0;k<len(b);k++{ // [_ 9 8 8] [1 _ 8 8] [1 9 _ 8] [1 9 9 _]

				if b[j] == b[k] {

					tally+=1
				} 
			}
		}

		if tally == 4 {
				
			fmt.Println(a)

			os.Exit(0)
	
		}
	}
}


func spaced_int_slice(x int) []int {
	//dependencies "strconv" "math"
	b := strconv.Itoa(x)
	var list []int
	for i:=len(string(b))-1;i>0;i--{
		list = append(list,(x / int(math.Pow(10.0,float64(i)))))
		x-= int(x / int(math.Pow(10.0,float64(i))))*int(math.Pow(10.0,float64(i)))
	}
	list = append(list, x)
	return list
}

func x_power_y(x,y int) int {
	return int(math.Pow(float64(x),float64(y)))
}