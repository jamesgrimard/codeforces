//package main
import(
	"fmt"
	//"math"
	//"strings"
	//"os"
)

var n int

var smallest,largest,x,y int

var squad,squadl,ready []int

func main() {

	fmt.Scan(&n)
	for i:=0;i<n;i++{
		t:=0
		fmt.Scan(&t)
		squad = append(squad, t)
		squadl = append(squadl, t)

		ready = append(ready, t)
	}

	for i:=0;i<len(squad);i++{
		if squad[0] < squad[i] { // find largest height
			squad[0] = squad[i]
		}
	}
	largest = squad[0]

	for i:=0;i<len(squadl);i++{
		if squadl[0] > squadl[i] { // find smallest height
			squadl[0] = squadl[i]
		}
	}
	smallest = squadl[0]


	for i,j := range ready {
		if j == largest {
			x = i
			break
		}
	}
	ready = append(ready[:x], ready[x+1:]...)
	ready = append([]int{largest}, ready...)
	
	for i,j := range ready {
		if j == smallest {
			y = len(ready)-1 - i
		}
	}

	fmt.Println(x+y)

}

