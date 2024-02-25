//package main
import (
	"fmt"
)
func main() {
	var n int
	fmt.Scan(&n)
	tally:=1
	for i:=n/2;i>1;i--{
		if n%i == 0 {
			tally++
		}
	}
	fmt.Println(tally)
}