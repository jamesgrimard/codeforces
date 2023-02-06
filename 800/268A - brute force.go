//package main

import (
	"fmt"
	//"bufio"
	//"math"
	//"strings"
	//"os"
	//"sort"
)

var n int

var home,away []int

func main() {

	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var temp1,temp2 int
		fmt.Scan(&temp1,&temp2)
		home,away = append(home, temp1),append(away, temp2)
	}

	tally:=0

	for i:=0;i<len(home);i++{
		for j:=0;j<len(away);j++{
			if i != j {
				if home[i] == away[j] {
					tally++
				}	
			}
		}
	}

	fmt.Println(tally)
	
}

