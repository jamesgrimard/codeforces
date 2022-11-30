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
		var n,m,max int
		fmt.Fscan(in,&n,&m)
		a:= make([]int,n)
		var b []int
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
			if a[j] > max {
				max = a[j]
			}
		}
		sort.Ints(a)
		for k:=1;k<=a[len(a)-1];k++{
			for j:=0;j<n;j++{
				if k == a[j] {
					goto out
				}
			}
			b = append(b,k)
			out:
		}
		sum:= 0
		for j:=0;j<len(b);j++{
			sum += b[j]
		}
		var x int
		for sum < m {
			x++
			sum += (max + x)
		}
		if sum == m {
			fmt.Fprintln(out,"YES")
		} else {fmt.Fprintln(out,"NO")}
	}
}

// create an array and store elements that do not appear in the permutation
// to do this, create a nested loop with an outer loop range of max value in given array
// check each element against all values in nested loop
// store absent values into separate array
// create a for loop with the condition that sum < m
// create a counter that adds to the max value of the initial given array and adds it to sum