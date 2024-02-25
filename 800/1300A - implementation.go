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
		sum:=0
		zeros:=0
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
			sum+=list[j]
			if list[j] == 0 {
				zeros++
			}
		}
		if sum != 0 && zeros == 0 {
			fmt.Fprintln(out,0)
		} else if sum+zeros == 0 {
			fmt.Fprintln(out,zeros+1)
		} else {
			fmt.Fprintln(out,zeros)
		}	
	}
}
