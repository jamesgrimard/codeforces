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
		a:= make([]int,n)
		m:= make(map[int]bool)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		count:=0
		for j:=0;j<n;j++{
			if a[j] == 0 {
				count++
			}
		}
		if count > 0 {
			fmt.Fprintln(out,n-count)
			goto out
		}
		for j:=0;j<n;j++{
			if m[a[j]] == true {
				fmt.Fprintln(out,n)
				goto out
			}
			m[a[j]] = true
		}
		fmt.Fprintln(out,n+1)
		out:
	}
}

// count 0's, if count(0) > 0, return n-count(0)
// if a pair exists a[i] == a[j] return n
// return n+1