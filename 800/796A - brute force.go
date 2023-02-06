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
	var n,m,k int
	fmt.Fscan(in,&n,&m,&k)
	a:= make([]int,n)
	for i:=0;i<n;i++{
		fmt.Fscan(in,&a[i])
	}
	var mx int = 100
	for j:=m;j<n;j++{
		if a[j] != 0 && a[j] <= k {
			mx = j+1 - m
			break
		}
	}
	for j:=m-2;j>=0;j--{
		if a[j] != 0 && a[j] <= k && m - (j+1) < mx {
			mx = m - (j+1)
			break
		}
	}
	fmt.Fprintln(out,mx*10)
}

