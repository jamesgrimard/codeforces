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
		if n%2 == 0 {
			for j:=0;j<n;j+=2{
				fmt.Printf("%d %d ",j+2,j+1)
			}
		} else {
			fmt.Printf("3 1 2 ")
			for j:=3;j<n;j+=2{
				fmt.Printf("%d %d ",j+2,j+1)
			}
		}
		fmt.Println()
	}
}
