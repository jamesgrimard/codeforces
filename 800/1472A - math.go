//package main
import (
	"fmt"
)
func main() {
	var n int
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var w,h,s int
		fmt.Scan(&w,&h,&s)
		counter:=1
		if w%2==0{
			for w%2==0{
				w= w/2
				counter*=2
			}
		}
		if h%2==0{
			for h%2==0{
				h= h/2
				counter*=2
			}
		}
		if counter >= s {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}	
	}
}

