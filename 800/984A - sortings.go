//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
    "sort"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	a:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
	}
	sort.Ints(a)
	if t & 1 == 1 {
		fmt.Fprintln(out,a[t/2])
	} else {
		fmt.Fprintln(out,a[t/2-1])
	}
}

// player a wants to remove mins and player b wants to remove maxs
// each player plays optimally,
// sort ints in ascending order
// sandwhich iteration  --> | | <--
// middle int is n-1