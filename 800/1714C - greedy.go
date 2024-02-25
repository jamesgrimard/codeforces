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
		var x int
		fmt.Fscan(in,&x)
		if x < 10 {
			fmt.Fprintln(out,x)
		} else {
			var list []int
			for j:=9;j>0;j--{
				if x > j {
					list= append(list,j)
				} else {
					list= append(list,x)
					break
				}
				x-=j
			}
			for j:=len(list)-1;j>=0;j--{
				fmt.Fprintf(out,"%v",list[j])
			}
			fmt.Fprintln(out,)
		}
	}
}
