//package main
import( 
    "fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var x int
		fmt.Scan(&x)
		if x%4 == 0 {
			fmt.Println("YES")
		}else{
			fmt.Println("NO")
		}
	}
}