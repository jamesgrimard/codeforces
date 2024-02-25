//package main
import( 
    "fmt"
    "sort"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Scan(&n)
		var list []int = make([]int,n)
		for j:=0;j<n;j++{
			fmt.Scan(&list[j])
		}
		sort.Ints(list)
		counter:=1
		for j:=1;j<len(list);j++{
			if list[j] != list[j-1] {
				counter++
			}
		}
		if (n%2 == 0 && counter % 2 == 0) || (n%2 != 0 && counter % 2 != 0) {
			fmt.Println(counter)
		} else {
			fmt.Println(counter-1)
		}
	}
}