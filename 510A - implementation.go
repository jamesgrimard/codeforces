//package main

import (
	"fmt"
	//"os"
	//"bufio"
	//"math"
	//"strings"
	//"sort"
	//"strconv"
)

var (
	x,y int
)

func main() {

	fmt.Scan(&y,&x)

	var board [][]string = make([][]string, y)

	for i:=0;i<y;i++{
		board[i] = make([]string, x)
	}

	tally:=1

	for i:=0;i<y;i++{
		for j:=0;j<x;j++{
			if i % 2 == 0 {
				board[i][j] = "#"
			} else {
				if j == x-1 {
					if 4*tally-3 == i {
						board[i][j] = "#"
						tally++
					} else {
						board[i][j] = "."
					}
				} else {
					if j == 0 {
						if 4*tally-3 == i{
							board[i][j] = "."
						} else {
							board[i][j] = "#"
						}
					} else {
						board[i][j] = "."
					}
				}
			}
		}
	}

	for i:=0;i<y;i++{
		for j:=0;j<x;j++{
			fmt.Printf("%v",board[i][j])
		}
		fmt.Println()
	}



}
