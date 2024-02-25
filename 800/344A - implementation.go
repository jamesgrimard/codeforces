//package main
import(
	"fmt"
)
func main() {
	var n int
	tally:=1
	fmt.Scan(&n)
	list := make([]int,n)
	for i:=0;i<n;i++{
		fmt.Scan(&list[i])
	}
	for i:=1;i<n;i++{
		if list[i] != list[i-1]{
			tally++
		}
	}	
	fmt.Println(tally)
}