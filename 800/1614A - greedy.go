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
		var n,l,u,bank int
		fmt.Fscan(in,&n,&l,&u,&bank)
		counter:=0
		var list []int
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x >= l && x <= u {
				list= append(list,x)
			}
		}
		sort.Ints(list)
		for j:=0;j<len(list);j++{
			if bank-list[j] >= 0 {
				counter++
				bank-=list[j]
			}
		}
		fmt.Fprintln(out,counter)
	}
}
