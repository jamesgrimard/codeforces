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
		count:=0
		for j:=1;j<n;j++{
			if list[j] == list[j-1] {
				list = append(list[:j],append(list[j+1:],[]int{list[j]}...)...)
				j--
			}
			count++
			if count == n-1 {
				break
			}
		}
		for j:=0;j<len(list);j++{
			fmt.Fprintf(out,"%v ",list[j])
		}
		fmt.Fprintln(out,)
	}
}
