//package main
import (
	"fmt"
	"sort"
)
var t int
func main() {
	fmt.Scan(&t)
	var details [][]int = make([][]int,t)
	var list [][][]int = make([][][]int,t)
	for i:=0;i<t;i++{
		var n,k int
		fmt.Scan(&n,&k)
		details[i] = make([]int,0,2)
		details[i] = append(details[i],n,k)

		list[i] = make([][]int,2)
		list[i][0] = make([]int,0,n)
		for j:=0;j<n;j++{
			var holder int
			fmt.Scan(&holder)
			list[i][0] = append(list[i][0],holder)
		}
		list[i][1] = make([]int,0,n)
		for j:=0;j<n;j++{
			var holder int
			fmt.Scan(&holder)
			list[i][1] = append(list[i][1],holder)
		}
	}
	for i:=0;i<len(list);i++{
		sort.Ints(list[i][0])
		sort.Ints(list[i][1])
		tally:=0
		for k:=0;k<details[i][1];k++{
			if list[i][0][k] < list[i][1][len(list[i][1])-1-k] {
				list[i][0][k] = list[i][1][len(list[i][1])-1-k]
			}
		}
		for k:=0;k<details[i][0];k++{
			tally+=list[i][0][k]
		}
		fmt.Println(tally)
	}
}