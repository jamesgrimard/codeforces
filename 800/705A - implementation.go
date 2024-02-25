//package main
import(
	"fmt"
	//"math"
	//"strings"
)

var n int
var str string

func main() {

	fmt.Scan(&n)

	for i:=1;i<=n;i++{
		if i == 1 {
			str = "I hate"
		} else if i%2==0 {
			str = str+" that I love"
		} else {
			str = str+" that I hate"
		}
	}

	str = str + " it"

	fmt.Println(str)
}

