//package main
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var y,x int
		fmt.Fscan(in,&y,&x)
		sum:= (x*x+x)/2
		for j:=2;j<=y;j++{
			sum += j*x
		}
		fmt.Fprintln(out,sum)
	}
}