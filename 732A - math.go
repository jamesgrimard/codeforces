//package main

import (
	"fmt"
	//"strconv"
	"os"
	//"bufio"
	//"math"
	//"strings"
	//"sort"
)

var (
	a,b int
)

func main() {

	fmt.Scan(&a,&b)

	tally:=1

	for {
		if ((a*tally)-b) % 10 == 0 {
			fmt.Println(tally)
			os.Exit(0)
		} else {
			if (a*tally) % 10 == 0 {
				fmt.Println(tally)
				os.Exit(0)	
			}
		}
		tally++
	}

}