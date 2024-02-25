//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
    "math"
)
func main() {
	var in = bufio.NewReader(os.Stdin)
	var out = bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	floor := int(math.Sqrt(float64(t)))
	for j:=floor;j>=1;j--{
		if t % j == 0 {
			fmt.Fprintln(out,j,t/j)
			break
		}
	}
}