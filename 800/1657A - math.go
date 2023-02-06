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
		var x,y float64
		fmt.Fscan(in,&x,&y)
		if x == 0 && y == 0 {
			fmt.Fprintln(out,0)
		} else {
			if isIntegral(math.Sqrt(x*x+y*y)) == true {
				fmt.Fprintln(out,1)
			} else {
				fmt.Fprintln(out,2)
			}
		}
	}
}
func isIntegral(val float64) bool {
	return val == float64(int(val))
}
