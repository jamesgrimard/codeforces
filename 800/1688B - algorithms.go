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
		var n,odds int
		fmt.Fscan(in,&n)
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
			if a[j] & 1 == 1 {
				odds++
			}
		}
		if odds == 0 {
			for j:=0;j<n;j++{
				count:=0
				for a[j] & 1 != 1 {
					count++
					a[j] /= 2
				}
				if count < odds || odds == 0 {
					odds = count
				}
			}
			fmt.Fprintln(out,(n-1)+odds)
		} else {
			fmt.Fprintln(out,n-odds)
		}
	}
}

// odd + even == odd
// odd + odd == even
// even + even == even

// count(odds) >= 1: return n-odds
// elese count(odds) == 0; iterate through entire list, find least amount of operations to divide element by 2
// and get an odd, ie 8/2 = 4 4/2 = 2 2/2 = 1, count= 3
// return n-1 + count