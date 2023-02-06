//package main
import( 
    "fmt"
    "bufio"
    "os"
    "sort"
)
func main() {
	var t int
	var in = bufio.NewReader(os.Stdin)
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Fscan(in,&n)
		var a []int = make([]int,n)
		var b []int = make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		for j:=0;j<n;j++{
			fmt.Fscan(in,&b[j])
		}
		for j:=0;j<n;j++{
			if a[j] > b[j] {
				a[j], b[j] = b[j], a[j]
			}
		}
		sort.Ints(a)
		sort.Ints(b)
		fmt.Println(a[n-1]*b[n-1])
	}
}