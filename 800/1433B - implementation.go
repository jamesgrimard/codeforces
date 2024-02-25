//package main
import( 
    "fmt"
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
		tally:=0
		for j:=0;j<n;j++{
			if list[j] == 1 {
				counter:=0
				for k:=j+1;k<n;k++{
					if list[k] == 0 {
						counter++
					} else {
						tally+=counter
						counter=0
					}
				}
				fmt.Println(tally)
				break
			}
		}
	}
}