//package main
import( 
    "fmt"
    "bufio"
    "os"
    "sort"
)
type Auction struct {
	Index int
	Value int
}
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Fscan(in,&n)
		if n == 1 {
			var x int
			fmt.Fscan(in,&x)
			fmt.Fprintln(out,x)
		} else {
			list:= make([]Auction,n)	// scan into struct array
			for j:=0;j<n;j++{
				fmt.Fscan(in,&list[j].Value)
				list[j].Index= j+1
			}
			sort.Slice(list, func(j, k int) bool { // sorting function for struct array
				return list[j].Value < list[k].Value // ascending order
			})
			
			// find first distinct list[j].Value and print list[j].Index 
			if list[0].Value != list[1].Value {
				fmt.Fprintln(out,list[0].Index)
				continue
			} else if n==2  {
				fmt.Fprintln(out,-1)
				continue
			}	

			for j:=1;j<n-1;j++{
				if list[j-1].Value != list[j].Value && list[j].Value != list[j+1].Value {
					fmt.Fprintln(out,list[j].Index)
					break
				} else if j == n-2 {
					if list[n-2].Value != list[n-1].Value {
						fmt.Fprintln(out,list[n-1].Index)
						break
					} else {
						fmt.Fprintln(out,-1)
					}
				}
			}
			
		}
	}
}
