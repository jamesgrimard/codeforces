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
		var n,B,x,y int
		fmt.Fscan(in,&n,&B,&x,&y)
		var list []int= []int{0}
		for j:=1;j<=n;j++{
			if list[j-1]+x <= B {
				list= append(list,list[j-1]+x)
			} else {
				list= append(list,list[j-1]-y)
			}
		}
		count:=0
		for j:=0;j<len(list);j++{
			count+=list[j]
		}
		fmt.Fprintln(out,count)
	}
}
