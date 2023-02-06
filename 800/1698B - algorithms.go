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
		var n,k int
		fmt.Fscan(in,&n,&k)
		list:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		var tally int
		for j:=0;j<n-2;j++{
			if list[j]+list[j+2] < list[j+1] {
				tally++
			}
		}
		if k == 1 {
			if n%2 == 0 {
				fmt.Fprintln(out,(n-2)/2)
			} else {
				fmt.Fprintln(out,n/2)
			}
		} else {
			fmt.Fprintln(out,tally)
		}
	}
}
