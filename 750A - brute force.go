//package main

import (
	"fmt"
	"os"
	//"bufio"
	//"math"
	//"strings"
	//"sort"
	//"strconv"
)

var (
	n,minutes,time_spent int
)

func main() {

	fmt.Scan(&n,&minutes)

	time_left := 240 - minutes

	if time_left < 5 {
		fmt.Println(0)
		os.Exit(0)
	}

	for i:=1;i<=n;i++{
		time_spent += 5*i
		if time_left / time_spent < 1 {
			fmt.Println(i-1)
			os.Exit(0)	
		} else {
			if i == n {
				fmt.Println(n)
				os.Exit(0)	
			}
		}
	}
}
