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
	list:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&list[i])
	}
	sort.Ints(list)
	count:=0
	for j:=1;j<t;j++{
		count+=(list[j]-list[j-1]-1)
	}
	fmt.Fprintln(out,count)
}
