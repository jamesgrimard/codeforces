//package main

import(
	"fmt"
	//"strings"
	//"os"
	//"sort"
)

var a,b int

var c,output string

var list []int

func main() {

	fmt.Scan(&a,&b,&c) // take inputs

	for i:=0;i<a;i++{ // build slice as 1's and 0's
		if string(c[i]) == "G" {
			list = append(list, 0)
		} else {
			list = append(list, 1)
		}
	}

	for i:=0;i<b;i++{ // iterations
		
		for j:=0;j<a;j++{

			if j == a-1 {
				list[j] = list[j]
			} else {
				if list[j] == 1 && list[j+1] == 0 {
					list[j],list[j+1] = 0,1 
					j++
				}
			}	
		}	
	}

	for i:=0;i<a;i++{ // build slice as 1's and 0's
		if list[i] == 0 {
			output += "G" 
		} else {
			output += "B" 
		}
	}

	fmt.Println(output)

}

