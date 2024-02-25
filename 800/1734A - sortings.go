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
		var c []int
		for j:=0;j<n;j++{
			var b []int
			for k:=0;k<n;k++{
				if j != k {
					b = append(b,abs(a[j]-a[k]))
				}
			}
			sort.Ints(b)
			c = append(c,b[0]+b[1])
		}
		sort.Ints(c)
		fmt.Fprintln(out,c[0])
		
	}
}
func abs(a int) int {
	if a < 0 {
		return a*-1
	}
	return a
}
// iterate over each element in the array and find an additional two elements with the smallest difference
// will need to use a nested loop and check diference between each element using abs(a[j]-a[k])
// append results to an inner array and sort that inner array, sum the two lowest values and add them to master list
// sort master list to find lowest pair sum