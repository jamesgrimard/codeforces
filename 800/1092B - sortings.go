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
	var n int
	fmt.Fscan(in,&n)
	list:= make([]int,n)
	for j:=0;j<n;j++{
		fmt.Fscan(in,&list[j])
	}
	sort.Ints(list)
	count:=0
	for j:=0;j<n-1;j+=2{
		count+=(list[j+1]-list[j])
	}
	fmt.Fprintln(out,count)
}
