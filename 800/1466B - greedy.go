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
		list:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		sort.Ints(list)

		for j:=1;j<len(list);j++{
			if list[j] == list[j-1] {
				list[j]++
			}
			if list[j] <= list[j-1] {
				list = append(list[:j],list[j+1:]...)
				j--
			}
		}
		fmt.Fprintln(out,len(list))
	}
}
