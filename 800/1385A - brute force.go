//package main
import (
	"fmt"
	"bufio"
	"os"
)
func main() {
	var t int
	var in = bufio.NewReader(os.Stdin)
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var x,y,z int
		fmt.Fscan(in,&x,&y,&z)
		if x > y {
			if x == z { // b
				fmt.Println("YES")
				fmt.Println(x,y,1)
				continue
			} 
			if x < z {
				fmt.Println("NO")	
				continue
			}
			if x > z {
				fmt.Println("NO")	
				continue
			}
		} else if x < y {
			if y < z {
				fmt.Println("NO")
				continue
			}
			if y > z {
				fmt.Println("NO")
				continue
			}
			if y == z { // c
				fmt.Println("YES")
				fmt.Println(x,x,z)
				continue
			}
		} else if x == y {
			if x < z {
				fmt.Println("NO")
				continue
			}
			if x == z {
				fmt.Println("YES")
				fmt.Println(x,y,z)
				continue
			}
			if x > z { // a
				fmt.Println("YES")
				fmt.Println(x,z,z)
				continue
			}
		}
	}
}

