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
	var n int
	fmt.Fscan(in,&n)
	a:= make([]int,n)
	for j:=0;j<n;j++{
		fmt.Fscan(in,&a[j])
	}
	var i int
	fmt.Fscan(in,&i)
	for j:=0;j<i;j++{
		var x,y int
		fmt.Fscan(in,&x,&y)
		if x != 1 {
			a[x-2] += y-1
		}
		if x != n {
			a[x] += a[x-1] - y
		}
		a[x-1] = 0
	}
	for j:=0;j<len(a);j++{
		fmt.Fprintln(out,a[j])
	}
}

// this problem is testing your ability to iterate over an array with a variable set of indexes
// primary sorting algorithm is a[i] - y goes right, and y - 1 goes left
// if a[i] is on the edge, just set shift the left or right and set then set a[i] to 0