//package main
import( 
    "fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var list []int = make([]int,7)
		for j:=0;j<7;j++{
			fmt.Scan(&list[j])
		}
		for j:=2;j<7;j++{
			if list[0]+list[1]+list[j] == list[6] {
				fmt.Println(list[0],list[1],list[j])
				break
			}
		}
	}
}

