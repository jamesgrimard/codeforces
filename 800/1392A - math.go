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
		var n,tally,previous int
		fmt.Fscan(in,&n)
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x != previous && j != 0{
				tally++
			}
			previous = x
		}
		if tally > 0 {
			fmt.Fprintln(out,1)
		} else {
			fmt.Fprintln(out,n)
		}
	}
}
