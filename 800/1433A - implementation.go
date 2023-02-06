//package main
import (
	"fmt"
	"strconv"
)
var n int
func main() {
	fmt.Scan(&n)
	var list []int = make([]int,n)
	for i:=0;i<n;i++{
		fmt.Scan(&list[i])
	}
	for i:=0;i<len(list);i++{
		number_string:= strconv.Itoa(list[i])
		first_number:= string(number_string[0])
		first_number_int, _ := strconv.Atoi(first_number)
		var tally int
		for j:=1;j<=first_number_int;j++{ // section
			var floor int
			for k:=0;k<4;k++{ // floor
				if k == 0 {
					floor= j
					tally++
				} else {
					floor= floor * 10 + j
					tally+=(k+1)
				}
				if floor == list[i] {
					fmt.Println(tally)
					break
				}
			}
		}
	}
}
