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
		counter:=0
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x == 1 || x==3 {
				counter++
			}
		}
		fmt.Fprintln(out,counter)
	}
}