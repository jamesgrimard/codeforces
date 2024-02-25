//package main

import (
	"fmt"
	//"bufio"
	//"math"
	//"strings"
	"os"
	//"sort"
	//"strconv"
)

var (
	a,b,c string
	letters []string
)

func main() {

	fmt.Scan(&a,&b,&c)

	for i:=0;i<len(c);i++{
		letters = append(letters,string(c[i]))
	}

	for i:=0;i<len(a);i++{
		tally:=0
		for j:=0;j<len(letters);j++{
			if string(a[i]) == letters[j] {
				letters = append(letters[:j], letters[j+1:]...) 
				tally++
				break
			}
		}
		if tally == 0 {
			fmt.Println("NO")
			os.Exit(0)
		}
	}

	for i:=0;i<len(b);i++{
		tally:=0
		for j:=0;j<len(letters);j++{
			if string(b[i]) == letters[j] {
				letters = append(letters[:j], letters[j+1:]...) 
				tally++
				break
			}
		}
		if tally == 0 {
			fmt.Println("NO")
			os.Exit(0)
		}
	}

	if len(letters) == 0 {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
