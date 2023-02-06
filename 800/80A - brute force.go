//package main
import (
	"fmt"
	"os"
)
func main() {
	var a,b int
	fmt.Scan(&a,&b)
	for i:=a+1;i<=b;i++{
		tally:=0
		for j:=2;j<=9;j++{
			if i != j {
				if i%j == 0 {
					tally++
				}
			}
		}
		if tally == 0 { 
			if i == b {
				fmt.Println("YES")
				os.Exit(0)
			} else {
				fmt.Println("NO")
				os.Exit(0)
			}
		}
	}
	fmt.Println("NO")
}