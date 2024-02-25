//package main
import( 
    "fmt"
    "bufio"
    "os"
    "strings"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var binary string
		fmt.Fscan(in,&binary)
		zeros:= strings.Count(binary,"1")
		ones:= strings.Count(binary,"0")
		if len(binary) == 2 || len(binary) == 1 {
			fmt.Fprintln(out,0)
		} else if zeros == ones {
			fmt.Fprintln(out,zeros-1)
		} else if zeros > ones {
			fmt.Fprintln(out,ones)
		} else {
			fmt.Fprintln(out,zeros)
		}
	}
}