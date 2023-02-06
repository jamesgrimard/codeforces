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
		if x == 1 {
			fmt.Fprintln(out,1)
		} else if math.Mod(float64(x),(math.Sqrt(float64(x)))) == 0.0 {
			fmt.Fprintln(out,int(math.Sqrt(float64(x))))
		} else {
			fmt.Fprintln(out,int(math.Sqrt(float64(x)))+1)
		}
	}
}