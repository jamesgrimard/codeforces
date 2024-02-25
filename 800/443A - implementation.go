//package main

import (
	"fmt"
	"bufio"
	//"math"
	"strings"
	"os"
	//"sort"
)

var character_list, unique_list []string

func main() {

	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()

	input := scanner.Text()
	
	if len(input) <= 2 {
		fmt.Println(0)
		os.Exit(0)
	}
	
	for i:=0;i<len(input)-1;i+=3{
		character_list = append(character_list, strings.ToLower(string((input[i+1]))))
	}

	for i:=0;i<len(character_list);i++{

		if i == 0 {
			unique_list = append(unique_list, character_list[i])
		} else {
			tally:=0
			for j:=0;j<len(unique_list);j++{
				if character_list[i] == unique_list[j] {
					tally++
				}
			}
			if tally == 0 {
				unique_list = append(unique_list, character_list[i])
			}
		}
	}
	fmt.Println(len(unique_list))
}
