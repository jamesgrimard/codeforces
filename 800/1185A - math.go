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
	a:= make([]int,3)
	for i:=0;i<3;i++{
		fmt.Fscan(in,&a[i])
	}
	var d int
	fmt.Fscan(in,&d)
	for j:=1;j<3;j++{
		if a[j] < a[j-1] {
			a[j] , a[j-1] = a[j-1] , a[j]
			j-=2
			if j < 0 {
				j = 0
			}
		}
	}
	var count int
	if a[1] - a[0] < d {
		count += (d - (a[1]-a[0]))
	}
	if a[2] - a[1] < d {
		count += (d - (a[2]-a[1]))
	}
	fmt.Fprintln(out,count)
}
// rope infinite both directions
// sort elements ascending
// check dx between each element
// subtract dx from d to get required space, sum required space