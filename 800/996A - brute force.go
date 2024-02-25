//package main

import (
	"fmt"
	//"bufio"
	//"math"
	//"strings"
	//"os"
	//"sort"
)

var x int
var notes int = 0

func main() {
	
	fmt.Scan(&x)

	var hundreds int = x / 100
	x-= hundreds*100
	notes+=hundreds

	var twenties int = x / 20
	x-= twenties*20
	notes+=twenties

	var tens int = x / 10
	x-= tens*10
	notes+=tens

	var fives int = x / 5
	x-= fives*5
	notes+=fives

	var ones int = x / 1
	x-= ones*1
	notes+=ones

	fmt.Println(notes)

}

