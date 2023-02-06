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
		fmt.Fprintln(out,n)
		list:= make([]int,n)
		for j:=1;j<=n;j++{
			list[j-1]=j
			fmt.Fprintf(out,"%v ",j)
		}
		fmt.Fprintln(out,)
		for j:=0;j<n-1;j++{
			for k:=j;k<=j;k++{
				list[j],list[n-1] = list[n-1],list[j]
			}
			for l:=0;l<len(list);l++{
				fmt.Fprintf(out,"%v ",list[l])
			}
			fmt.Fprintln(out,)
		}
	}
}