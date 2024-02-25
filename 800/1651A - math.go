//package main
import( 
    "fmt"
    "bufio"
    "os"
    "math"
)
type coords struct{
	row int
	column int
}
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n float64
		fmt.Fscan(in,&n)
		n = math.Pow(float64(2),float64(n))
		fmt.Fprintln(out,int(n)-1)
	}
}
