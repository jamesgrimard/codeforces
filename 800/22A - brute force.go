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
	for j:=1;j<t;j++{
		if a[j] > a[j-1] {
			fmt.Fprintln(out,a[j])
			goto out
		}
	}
	fmt.Fprintln(out,"NO")
	out:
}

// second order statistic is the 2nd lowest value in the set