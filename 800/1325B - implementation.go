//package main
import( 
    "fmt"
    "sort"
    "bufio"
    "os"
)
func main() {
	var t int
	var in = bufio.NewReader(os.Stdin)
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Fscan(in,&n)
		var list []int = make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		sort.Ints(list)
		holder:=0
		tally:=0
		for j:=0;j<len(list);j++{
			if list[j] > holder {
				holder= list[j]
				tally++
			}
		}
		fmt.Println(tally)
	}
}
