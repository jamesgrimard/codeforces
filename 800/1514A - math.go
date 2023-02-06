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
		var n int
		fmt.Fscan(in,&n)
		counter:=0
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if isIntegral(math.Sqrt(float64(x))) == false {
				counter++
			}
		}
		if counter == 0 {
			fmt.Fprintln(out,"NO")
		} else {
			fmt.Fprintln(out,"YES")
		}
	}
}	

func isIntegral(x float64) bool {
	if x == float64(int(x)) {
		return true
	}
	return false
}