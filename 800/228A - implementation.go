//package main
import(
	"fmt"
	//"math"
	//"strings"
)

var a = make([]int,4)
var b []int
var tally int = 0

func main() {
	
	for i:=0;i<4;i++{
		fmt.Scan(&a[i])
	}

	// [1 7 3 3]

	for i:=0;i<len(a)-1;i++{
		//fmt.Printf("_")

		for j:=i+1;j<len(a);j++{

			if a[i] == a[j] {
				tally++
				break
			}
			//fmt.Printf("*")
			
		}
		//fmt.Printf("\n")

	}
	
	fmt.Println(tally)
	
	
	

}

