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
	for i:=0;i<t;i++{
		var n int
		fmt.Fscan(in,&n)
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		var height int
		sort.Ints(a)
		for j:=0;j<n;j++{
			tally:=0
			for k:=j;k<n;k++{
				if a[k] >= a[j] {
					tally++
				}
			}
			if tally >= a[j] {
				height = a[j]
			} else {
				if tally > height {
					height = tally
				}
			}
		}
		fmt.Fprintln(out,height)
	}
}

// nested loop - iterate over the sorted heights
// for every height >= to current height ++ to tally
// if tally > current height, max height = current height, else max height == tally