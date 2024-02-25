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
		var n,x int
		fmt.Fscan(in,&n,&x)
		list:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		mapper:= make(map[int]int)
		for j:=0;j<n;j++{
			mapper[j]= list[j]
		}
		sort.Ints(list)
		counter:=0
		for j:=0;j<x;j++{
			if mapper[j] <= list[x-1] {
				continue
			} else {
				counter++
			}
		}
		fmt.Fprintln(out,counter)
	}
}