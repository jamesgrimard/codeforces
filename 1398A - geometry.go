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
		list:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		if list[0]+list[1] <= list[len(list)-1] {
			fmt.Fprintln(out,1,2,len(list))
		} else {
			fmt.Fprintln(out,-1)
		}
	}
}
