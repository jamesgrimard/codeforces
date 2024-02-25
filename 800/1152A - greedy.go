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
	var t,m,to,te,mo,me int
	fmt.Fscan(in,&t,&m)
	for i:=0;i<t;i++{
		var x int
		fmt.Fscan(in,&x)
		if x & 1 == 1 {
			to++
		} else {
			te++
		}
	}
	for i:=0;i<m;i++{
		var x int
		fmt.Fscan(in,&x)
		if x & 1 == 1 {
			mo++
		} else {
			me++
		}
	}
	fmt.Fprintln(out,min(to,me)+min(te,mo))
}
func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}

// count odds and evens in each array
// take the min of each opposite pair, add the 2 diagonals