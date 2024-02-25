//package main
import( 
    "fmt"
    "strings"
    "os"
)
func main() {
	var x string
	fmt.Scan(&x)
	x_split:= strings.Split(x,"")
	for i:=0;i<5;i++{
		var y string
		fmt.Scan(&y)
		y_split:= strings.Split(y,"")
		if y_split[0] == x_split[0] || y_split[1] == x_split[1] {
			fmt.Println("YES")
			os.Exit(0)
		}
	}
	fmt.Println("NO")
}