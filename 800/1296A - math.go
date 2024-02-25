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
		var odds,evens int
		for j:=0;j<n;j++{
			var x int
			fmt.Scan(&x)
			if x%2 == 0 {
				evens++
			} else {
				odds++
			}
		}
		if evens == n {
			fmt.Println("NO")
		} else if odds == n && n%2 == 0 {
			fmt.Println("NO")
		} else {
			fmt.Println("YES")
		}
	}
}
