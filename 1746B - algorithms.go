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
	for i:=0;i<t;i++{
		var n int
		fmt.Fscan(in,&n)
		var zeros,ones int
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
			if a[j] == 1 {
				ones++
				continue
			}
			zeros++
		}
		var count int
		for j:=n-1;j>=n-ones;j--{
			if a[j] == 0 {
				count++
			}
		}
		fmt.Fprintln(out,count)
	}
}

// count number of ones on input
// reverse iterate over list to range n-ones_count
// you're counting the amount of 0's in this range that need to be replaced by 1's