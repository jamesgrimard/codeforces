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
		var x int
		fmt.Fscan(in,&x)
		list:= make([]int,3)
		for j:=0;j<3;j++{
			fmt.Fscan(in,&list[j])
			if list[j] < x {
				if x%list[j] == 0 {
					list[j]=x
				}else{
					list[j]*=(x/list[j]+1)
				}
			}
		}
		sort.Ints(list)
		fmt.Fprintln(out,list[0]-x)
	}
}
