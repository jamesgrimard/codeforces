//package main

import (
	"fmt"
	//"math"
	"strings"
	"os"
	"sort"
)

var x int
var word string
var word_list []int
var alphabet = []string{"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"}

func main() {

	fmt.Scan(&x)

	fmt.Scan(&word)

	word:=strings.ToLower(word)

	if x < 26 {
		fmt.Println("NO")
		os.Exit(0)
	}

	for i:=0;i<len(word);i++{
		for j,k := range alphabet {
			if string(word[i]) == k {
				word_list = append(word_list, j+1)
			}
		}
	}

	sort.Ints(word_list)

	for i:=1;i<=26;i++ { 
		tally:=0
		for j:=0;j<len(word_list);j++{ 
			if i == word_list[j] {
				tally++
			}
		}
		if tally == 0 {
			fmt.Println("NO")
			os.Exit(0)
		}
	}

	fmt.Println("YES")
	os.Exit(0)
}
