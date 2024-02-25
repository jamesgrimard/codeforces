package main
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
		for j:=0;j<n-1;j++{
			if list[j] >= list[j+1] {
				fmt.Println("NO")
				goto out
			}
		}
		fmt.Println("YES")
		out:
	}
}