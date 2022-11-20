//package main
// github.com/jamesgrimard/codeforces
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
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		var tally int
		for j:=0;j<n;j++{
			if list[j] > j+1 {
				if list[j] - (j+1) > tally {
					tally=list[j]-(j+1)
				}
			}
		}
		fmt.Fprintln(out,tally)		
	}
}
