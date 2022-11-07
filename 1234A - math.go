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
		var n int
		fmt.Fscan(in,&n)
		sum:=0
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			sum+=x
		}
		if sum%n != 0 {
			fmt.Fprintln(out,(sum/n)+1)
		} else {
			fmt.Fprintln(out,sum/n)
		}
	}
}