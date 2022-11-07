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
		var n,m int
		fmt.Fscan(in,&n,&m)
		list1:= make([]int,n)
		list2:= make([]int,m)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list1[j])
		}
		for j:=0;j<m;j++{
			fmt.Fscan(in,&list2[j])
		}
		for j:=0;j<n;j++{
			for k:=0;k<m;k++{
				if list1[j] == list2[k] {
					fmt.Fprintln(out,"YES")
					fmt.Fprintln(out,1,list1[j])
					goto out
				}
			}
		}
		fmt.Fprintln(out,"NO")
		out:
	}

}