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
		if x%7 == 0 {
			fmt.Println(x)
		} else {
			x= (x/10)*10
			for j:=0;j<10;j++{
				if (x+j)%7 == 0 {
					fmt.Println(x+j)
					break
				}
			}
		}
	}
}
