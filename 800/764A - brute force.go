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
	var x,y,n,tally int
	fmt.Fscan(in,&x,&y,&n)
	a:= make([]int,n)
	for j:=x-1;j<n;j+=x {
		a[j] = 1
	}
	for j:=y-1;j<n;j+=y{
		if a[j] == 1 {
			tally++
		}
	}
	fmt.Fprintln(out,tally)
}