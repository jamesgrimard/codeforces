//package main
 
import(
	"fmt"
	//"strings"
	"os"
	//"sort"
	//"strconv"
	//"math"
)
 
var a int
var list []int
 
func main() {
 
	fmt.Scan(&a)
 
	for i:=0;i<a;i++{
		var d int
		fmt.Scan(&d)
		list = append(list, d)
	}
 
	for i:=0;i<a;i++{
		if list[i] == 1 {
			fmt.Println("HARD")
			os.Exit(0)
		}
	}
	fmt.Println("EASY")
}