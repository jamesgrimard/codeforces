//package main
import (
	"fmt"
	"os"
)
func main() {
	var x,y int
	fmt.Scan(&y,&x)
	for i:=0;i<y;i++{
		for j:=0;j<x;j++{
			var element string
			fmt.Scan(&element)
			if element == "C" || element == "M" || element == "Y" {
				fmt.Println("#Color")
				os.Exit(0)
			} 
		}
	}
	fmt.Println("#Black&White")
}
