//package main
// github.com/jamesgrimard/codeforces
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
		if n <= 19 {
			fmt.Fprintln(out,"YES")
			for j:=0;j<n;j++{
				fmt.Fprintf(out,"%v ",int(math.Pow(float64(3),float64(j))))
			}
			fmt.Fprintln(out)
		} else {
			fmt.Fprintln(out,"NO")
		}
	}
}
