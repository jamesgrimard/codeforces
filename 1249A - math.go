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
		listSort(list)
		for j:=0;j<n-1;j++{
			if list[j+1] - list[j] == 1 {
				fmt.Fprintln(out,2)
				goto out
			}
		}
		fmt.Fprintln(out,1)
		out:
	}
}

func listSort(list []int) []int{
	for j:=1;j<len(list);j++{
		if list[j] < list[j-1] {
			list[j],list[j-1] = list[j-1],list[j]
			if j-2 < 0 {
				j=0
			} else {
				j-=2
			}
		}
	}
	return list
}