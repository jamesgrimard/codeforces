//package main
import (
	"fmt"
)
func main() {
	var n int
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var a,b,c,x,tally int
		fmt.Scan(&a,&b,&c,&x)
		if a >= b && a >= c {
			if (x-(a-b)-(a-c)) >= 0 && (x-(a-b)-(a-c)) % 3 == 0 {
				tally++
			}
		} else if b >= a && b >= c {
			if (x-(b-a)-(b-c)) >= 0 && (x-(b-a)-(b-c)) % 3 == 0 {
				tally++
			}
		} else {
			if (x-(c-b)-(c-a)) >= 0 && (x-(c-b)-(c-a)) % 3 == 0 {
				tally++
			}
		}
		if tally > 0 {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}