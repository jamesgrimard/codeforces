//package main

import (
	"fmt"
	"bufio"
	//"math"
	//"strings"
	"os"
	//"sort"
)

func main() {

	var n,tally int
	var key [256]int
	
	key['I'] = 20
	key['D'] = 12
	key['O'] = 8
	key['C'] = 6
	key['T'] = 4
	
	fmt.Scan(&n) // takes single first input (uint32)

	scan := bufio.NewScanner(os.Stdin) // assign variable to the scanner
	scan.Split(bufio.ScanWords) // sets scanner to split inputs

	for scan.Scan() { // keeps scanning for next token until ctrl-c cancel
		tally += key[scan.Text()[0]] //scans first letter of each word
	}
	fmt.Println(tally)
}

