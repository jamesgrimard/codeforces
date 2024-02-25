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
		if n%3 == 0 {
			fmt.Println((n/3),(n/3)+1,(n/3)-1)
		} else if n%3 == 1 {
			fmt.Println((n/3),(n/3)+2,(n/3)-1)
		} else {
			fmt.Println((n/3)+1,(n/3)+2,(n/3)-1)
		}
	}
}