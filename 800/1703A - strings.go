//package main
import (
	"fmt"
	"strings"
)
func main() {
	var n int
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var x string
		fmt.Scan(&x)
		if strings.ToLower(x) == "yes" {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}
