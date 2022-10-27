//package main
import (
	"fmt"
	"bufio"
	"os"
)
func main() {
	var n int
	var in = bufio.NewReader(os.Stdin)
	fmt.Scan(&n)
	for i:=0;i<n;i++{
		var x int
		fmt.Fscan(in,&x)
		if x % 2 == 0 {
			fmt.Println(x/2)
		} else {
			fmt.Println(int(x/2))
		}
	}
}
