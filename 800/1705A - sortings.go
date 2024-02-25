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
		var n,c int
		fmt.Fscan(in,&n,&c)
		list:= make([]int,n*2)
		for j:=0;j<n*2;j++{
			fmt.Fscan(in,&list[j])
		}
		sort.Ints(list)
		for j:=0;j<n;j++{
			if list[j+n]-list[j] < c {
				fmt.Fprintln(out,"NO")
				goto out
			}
		}
		fmt.Fprintln(out,"YES")
		out:
	}	
}
