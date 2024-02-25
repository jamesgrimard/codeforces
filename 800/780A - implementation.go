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
	t *= 2
	a:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
	}
	m:= make(map[int]bool)
	var tally,max int
	for j:=0;j<t;j++{
		tally++
		if m[a[j]] == true {
			tally-=2
			continue
		}
		m[a[j]] = true
		if tally > max {
			max = tally
		}
	}
	fmt.Fprintln(out,max)
}