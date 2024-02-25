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
	for j:=0;j<t;j++{
		var n int
		fmt.Fscan(in,&n)
		list:= make([]int,n)
		for k:=1;k<=n;k++{
			list[k-1]=k
		}
		for k:=n-2;k>=0;k-=2{
			list[k],list[k+1] = list[k+1],list[k]
		}
		for k:=0;k<n;k++{
			fmt.Fprintf(out,"%v ",list[k])
		}
		fmt.Fprintln(out,)
		
	}
}