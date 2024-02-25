//package main
import (
	"fmt"
	"bufio"
	"os"
)
var n,x,y int
func main() {
	var in = bufio.NewReader(os.Stdin)
	fmt.Fscan(in,&n)
	for i:=0;i<n;i++{
		fmt.Fscan(in,&x)
		var largest,smallest int
		for j:=0;j<x;j++{
			fmt.Fscan(in,&y)
			if j == 0 {
				largest,smallest = y,y
			} else if y < smallest {
				smallest = y
			} else if y > largest {
				largest = y
			}
		}
		fmt.Println(largest-smallest)
	}
}
