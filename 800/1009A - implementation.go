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
	var n,m int
	fmt.Fscan(in,&n,&m)
	a:= make([]int,n)
	b:= make([]int,m)
	for i:=0;i<n;i++{
		fmt.Fscan(in,&a[i])
	}
	for i:=0;i<m;i++{
	 	fmt.Fscan(in,&b[i])
	}
	var tally,count int
	for i:=0;i<m;i++{
		for tally < n {
			if b[i] >= a[tally] {
				count++
				tally++
				break
			}
			tally++
		}
	}
	fmt.Fprintln(out,count)
}
