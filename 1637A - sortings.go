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
		var count,holder int
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if j == 0 || x >= holder{
				holder= x
			} else {
				count++
			}
		}
		if count == 0 {
			fmt.Fprintln(out,"NO")
		} else {
			fmt.Fprintln(out,"YES")
		}
	}
}
