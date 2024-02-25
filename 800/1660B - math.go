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
		if n == 1 {
			var x int
			fmt.Fscan(in,&x)
			if x > 1 {
				fmt.Fprintln(out,"NO")
				continue
			} else {
				fmt.Fprintln(out,"YES")
				continue
			}
		}
		largest:=0
		second_largest:=0
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x >= largest {
				second_largest= largest
				largest = x
			} else if x > second_largest  {
				second_largest= x
			}
		}
		if largest - second_largest > 1 {
			fmt.Fprintln(out, "NO")
		} else {
			fmt.Fprintln(out,"YES")
		}
	}
}