//package main
import( 
    "fmt"
    "bufio"
    "os"
    "sort"
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
		list:= make([]float64,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		sort.Float64s(list)
		var sum float64
		for j:=0;j<n-1;j++{
			sum+=list[j]
		}
		fmt.Fprintln(out,(sum/(float64(n)-1))+list[n-1])
	}
}