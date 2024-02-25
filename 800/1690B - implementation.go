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
		largest:=0
		smallest:=999999999
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list1[j])
			if list1[j] >= largest {
				largest=list1[j]
			}
			if list1[j] <= smallest{
				smallest=list1[j]
			}
			
		}	
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list2[j])
		}
		difference:=0
		for j:=0;j<n;j++{
			if list1[j] == largest {
				difference= list1[j]-list2[j]
				break
			}
		}
		for j:=0;j<n;j++{
			if list1[j]-list2[j] != difference || difference < 0 {
				if list1[j]-list2[j] < difference && list2[j] == 0 {
					continue
				}
				fmt.Fprintln(out,"NO")
				goto out
			}
		}
		fmt.Fprintln(out,"YES")
		out:
	}
}