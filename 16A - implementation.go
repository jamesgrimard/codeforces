//package main
import(
	"fmt"
	//"math"
	"strings"
)

var a,b string
var x,y []string
var output []string
func main() {

	fmt.Scan(&a,&b)

	for i:=0;i<len(a);i++{
		x = append(x, string(a[i]))
		y = append(y, string(b[i]))
	}

	for i:=0;i<len(a);i++{
		if x[i] == y[i] {
			output = append(output, "0")
		} else {
			output = append(output, "1")
		}
	}

	fmt.Println(strings.Join(output, ""))

}

