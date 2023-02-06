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
	for {
		for j:=1;j<=n;j++{
			if k - j < 0 {
				goto out
			}
			k -= j
		}
	}
	out:
	fmt.Fprintln(out,k)
}