//package main
import( 
    "fmt"
    "bufio"
    "os"
    "math"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var x int
		fmt.Fscan(in,&x)
		if isIntegral(math.Sqrt(float64(x))) == true {
			fmt.Fprintln(out,int(math.Sqrt(float64(x))),1)
		} else {
			l:= int(math.Sqrt(float64(x))) // 2
			y_cord:= l*l+1 // 5
			if x < l+y_cord {
				fmt.Fprintln(out,(l+1)-(l+y_cord-x),l+1)
			} else {
				fmt.Fprintln(out,l+1,(l+1)*(l+1)-x+1)
			}
		}
	}
}
func isIntegral(val float64) bool {
	return val == float64(int(val))
}
