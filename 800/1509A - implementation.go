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
		var odds []int
		var evens []int
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x%2 != 0 {
				odds = append(odds,x)
			} else {
				evens = append(evens,x)
			}
		}
		odds = append(odds,evens...)
		for j:=0;j<len(odds);j++{
			fmt.Fprintf(out,"%v ",odds[j])
		}
		fmt.Fprintln(out,)
	}
}
