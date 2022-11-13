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
		list1:= make([]int,n)
		list2:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list1[j])
		}
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list2[j])
		}	
		fmt.Fprintf(out,"%v ",list2[0]-list1[0])
		for j:=0;j<n-1;j++{
			if list2[j] > list1[j+1] {
				fmt.Fprintf(out,"%v ",list2[j+1]-list2[j])
			} else {
				fmt.Fprintf(out,"%v ",list2[j+1]-list1[j+1])
			}
		}
		fmt.Fprintln(out,)
	}
}