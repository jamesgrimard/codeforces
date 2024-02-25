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
		var n,current int
		fmt.Fscan(in,&n,&current)
		cost:= make([]int,n)
		additional:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&cost[j])
		}
		for j:=0;j<n;j++{
			fmt.Fscan(in,&additional[j])
		}
		for j:=0;j<len(cost);j++{
			if cost[j] <= current {
				current+= additional[j]
				cost = append(cost[:j],cost[j+1:]...)
				additional = append(additional[:j],additional[j+1:]...)
				j=-1
			}
		}
		fmt.Fprintln(out,current)
	}
}