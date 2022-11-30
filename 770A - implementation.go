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
	var n,k int
	fmt.Fscan(in,&n,&k)
	a:= make([]int,n)
	for l:=0;l<k;l++{
		for j:=l;j<n;j+=k{
			a[j] = 97+l
		}
	}
	for j:=0;j<n;j++{
		fmt.Fprintf(out,"%v",string(a[j]))
	}
}

// set step to k