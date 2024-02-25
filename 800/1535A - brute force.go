//package main
import (
	"fmt"
)
func main() {
	var n int
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var a,b,c,d int
		fmt.Scan(&a,&b,&c,&d)
		if a > b {
			if b > c && b > d {
				fmt.Println("NO")
				continue
			}
			if a < c && a < d {
				fmt.Println("NO")
				continue
			}
		} else {
			if a > c && a > d {
				fmt.Println("NO")
				continue
			}
			if b < c && b < d {
				fmt.Println("NO")
				continue
			}
		}
		fmt.Println("YES")
	}
}
