//package main
import( 
    "fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var x string
		fmt.Scan(&x)
		if len(x)%2 != 0 {
			fmt.Println("NO")
		} else {
			var a,b,c int
			for j:=0;j<len(x);j++{
				if string(x[j]) == "A" {
					a++
				} else if string(x[j]) == "B" {
					b++
				} else {
					c++
				}
			}
			if b == (a+c) {
				fmt.Println("YES")
			} else {
				fmt.Println("NO")
			}
		}
	}
}