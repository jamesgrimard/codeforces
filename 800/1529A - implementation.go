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
		for j:=0;j<len(list);j++{
			if list[j] < list[len(list)-1] {
				avg:= (list[j] + list[len(list)-2] + list[len(list)-1])/3
				for k:=len(list)-2;k<len(list);k++{
					if list[k] > avg {
						list= list[:k]
						j--
						break
					}
				}
			} else {
				fmt.Println(n - len(list))
				break
			}
		}
	}
}
