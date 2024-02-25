//package main
import( 
    "fmt"
    "sort"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var list []int = make([]int,3)
		for j:=0;j<3;j++{
			fmt.Scan(&list[j])
		}
		sort.Ints(list)
		if list[0] == list[1] {
			if list[2] % 2 != 0 {
				fmt.Println("NO")
				continue
			} 
		} else if list[1] == list[2] {
			if list[0] % 2 != 0 {
				fmt.Println("NO")
				continue
			} 
		} else if list[0] == list[2] {
			if list[1] % 2 !=0 {
				fmt.Println("NO")
				continue
			}
		} else {
			if list[0] + list[1] != list[2] {
				fmt.Println("NO")
				continue
			}
		}
		fmt.Println("YES")
	}
}
