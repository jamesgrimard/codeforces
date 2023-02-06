//package main

import (
	"fmt"
	"os"
	//"sort"
	//"strconv"
	//"math"
	"bufio"
)


func main() {

	var n int
	var in = bufio.NewReader(os.Stdin)
	fmt.Scan(&n)
	
	for i:=0;i<n;i++{
		var holder1,holder2,holder3 int
		fmt.Fscan(in, &holder1, &holder2,&holder3)

		fmt.Println((int((holder3-holder2)/holder1)*holder1+holder2))
	}
}


