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
		var f,s int
		r1:= make([]int,n)
		r2:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&r1[j])
			if r1[j] == 1 {
				f++
			}
		}
		for j:=0;j<n;j++{
			fmt.Fscan(in,&r2[j])
			if r2[j] == 1 {
				s++
			}
		}
		var tally int
		for j:=0;j<n;j++{
			if r1[j]^r2[j] == 1 {
				tally++
			}
		}
		if tally > abs(f-s) {
			fmt.Fprintln(out,abs(f-s)+1)
			continue
		}
		fmt.Fprintln(out,abs(f-s))
		
	}
}
func abs(x int) int {
	if x < 0 {
		return x*-1
	}
	return x
}