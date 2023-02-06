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
		var n,g int
		fmt.Fscan(in,&n,&g)
		sum:=0
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			sum+=x
		}
		if sum == g {
			fmt.Fprintln(out,"YES")
		} else {
			fmt.Fprintln(out,"NO")
		}
	}
}
