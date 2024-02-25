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
		var s string
		fmt.Fscan(in,&n,&s)
		var a []byte = []byte(s)
		for j:=1;j<n;j++{
			if a[j] < a[j-1] {
				a[j] , a[j-1] = a[j-1] , a[j]
				j-=2
				if j < 0 {
					j = 0
				}
			}
		}
		for j:=0;j<n;j++{
			fmt.Fprintf(out,"%v",string(a[j]))
		}
		fmt.Fprintln(out)
	}
}

// problem is asking you to produce a new string that is not a subsequence of original
// a subsequence is a combination of elements with respect to the underlying order [abcd] subsq: [acd], but not [da]
// subsequence respects chronological order
// given that 'trygub' must not be found in new string, sort string in alphabetical order (ascending order)