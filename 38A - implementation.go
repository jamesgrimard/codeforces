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
	a:= make([]int,t-1)
	for j:=0;j<t-1;j++{
		fmt.Fscan(in,&a[j])
	}
	var l,r,years int
	fmt.Fscan(in,&l,&r)
	for j:=l-1;j<r-1;j++{
		years += a[j]
	}
	fmt.Fprintln(out,years)
}

// set rank costs to an array
// set range to [l-1:r-1]
// sum subarray