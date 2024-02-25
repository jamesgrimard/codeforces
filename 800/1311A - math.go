//package main
import (
	"fmt"
)
func main() {
	var n int 
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var a,b,tally int
		fmt.Scan(&a,&b)
		if a-b == 0 {
			tally+=0
		} else if a-b > 0 {
			if (a-b)%2 == 0 {
				tally++
			} else {
				tally+=2
			}
		} else if a-b < 0 {
			if (a-b)%2 != 0 {
				tally++
			} else {
				tally+=2
			}
		}
		fmt.Println(tally)
	} 
}