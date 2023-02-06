//package main

import (
	"fmt"
	//"strconv"
	//"os"
	//"bufio"
	//"math"
	//"strings"
	//"sort"
)

var (
	n int
)

func main() {

	fmt.Scan(&n)

	var secrets [][]string = make([][]string, n)

	for i:=0;i<n;i++{
		var holder string
		fmt.Scan(&holder)
		secrets[i] = make([]string,0,len(holder))
		for j:=0;j<len(holder);j++{
			secrets[i] = append(secrets[i], string(holder[j]))
		}
	}

	var outputs [][]string = make([][]string, n)
	
	for i :=0;i<len(secrets);i++{
		outputs[i] = make([]string,0,len(secrets[i]))
		if len(secrets[i])%2 != 0 {
			for j:=1;j<len(secrets[i]);j+=2{
				if secrets[i][j] == secrets[i][j+1] {
					outputs[i] = append(outputs[i],secrets[i][j-1])
				} else {
					outputs[i] = append(outputs[i],secrets[i][j-1],secrets[i][j])
				}
			}
			outputs[i] = append(outputs[i],secrets[i][len(secrets[i])-1])
		} else {
			for j:=1;j<len(secrets[i])-1;j+=2{
				if secrets[i][j] == secrets[i][j+1] {
					outputs[i] = append(outputs[i],secrets[i][j-1])
				} else {
					outputs[i] = append(outputs[i],secrets[i][j-1],secrets[i][j])
				}
			}
			outputs[i] = append(outputs[i],secrets[i][len(secrets[i])-2],secrets[i][len(secrets[i])-1])
		}
	}

	
	for i:=0;i<len(outputs);i++{
		for j:=0;j<len(outputs[i]);j++{
			fmt.Printf("%v",outputs[i][j])
		}
		fmt.Println()
	}

}
