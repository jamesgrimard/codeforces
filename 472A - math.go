//package main

import (
	"fmt"
	"strconv"
	"os"
	//"bufio"
	"math"
	//"strings"
	//"sort"
)

var (
	n int
)

func main() {

	fmt.Scan(&n)

	var p,q int = n/2,n/2+1

	if n%2 == 0 {
		p = int(n/2-1)
		q = int(n/2+1)
	}

	for i:=0;i<int(n/2);i++{

		tally:=0

		if last_digit(p)%2 == 0 || p == 49 || p == 91 || sum_of_digits(p)%3 == 0 {
			tally++
		}

		if last_digit(q)%2 == 0 || q == 49 || q == 91 || sum_of_digits(q)%3 == 0 {
			tally++
		}

		if tally == 2 {
			fmt.Printf("%v %v",p,q)
			os.Exit(0)
		} else {
			p--
			q++
		}
	}		
}

func x_power_y(x,y int) int {
	return int(math.Pow(float64(x),float64(y)))
}

func last_digit(x int ) int {
	x_len := len(strconv.Itoa(x))
	if x_len <= 1 {
		return x
	}
	x_first_digit := x/x_power_y(10,x_len-1)
	return x % (x_first_digit * x_power_y(10,x_len-1))
}

func sum_of_digits(x int)int {
    var tally int = 0;
    str := strconv.Itoa(x)
	for i:=0;i<len(str);i++{
		value, _ := strconv.Atoi(string(str[i])) 
		tally+=value
	}
	return tally
}

