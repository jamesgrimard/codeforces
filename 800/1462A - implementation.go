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
		var new_list []int	
		for j:=0;j<=n/2;j++{
			new_list = append(new_list,list[j])
			new_list = append(new_list,list[n-1-j])
		}
		for j:=0;j<n;j++{
			fmt.Printf("%v ",new_list[j])
		}
		fmt.Println()
	}
}
