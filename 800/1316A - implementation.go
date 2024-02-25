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
		var n,m,sum,mine int
		fmt.Fscan(in,&n,&m)
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if j != 0 {
				sum += x
			} else {
				mine = x
			}
		}
		fmt.Fprintln(out,min(sum+mine,m))
	}
}

func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}

// in order to keep average unchanged, we  must reduce the cumlative score of other students by the same
// amount we increase our own
// therefore, take the min(sum of all,m)