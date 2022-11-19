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
		for j:=n-1;j>=0;j--{
			list[n-j-1]=j+1
		}
		for j:=0;j<n;j++{
			fmt.Fprintf(out,"%v ",list[j])
		}
		fmt.Fprintln(out,)
		for j:=0;j<n-1;j++{
			for k:=0;k<n;k++{
				if k == j {
					fmt.Fprintf(out,"%v ",list[k+1])
					fmt.Fprintf(out,"%v ",list[k])
					k++
					continue
				}
				fmt.Fprintf(out,"%v ",list[k])				
			}
			fmt.Fprintln(out,)
		}
	}
}
