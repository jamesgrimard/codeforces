//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
)
func main() {
	var in = bufio.NewReader(os.Stdin)
	var out = bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var n,k int
	fmt.Fscan(in,&n,&k)
	if k > n {
		fmt.Fprintln(out,k)
	} else {
		fmt.Fprintln(out,(n/k+1)*k)
	}

}