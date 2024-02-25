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
	var a,b,c int
	fmt.Fscan(in,&a,&b,&c)
	if c < b {
		fmt.Fprintln(out,c)
	} else if c >= b && c <= a {
		fmt.Fprintln(out,b)
	} else {
		fmt.Fprintln(out,b-(c-a))
	}
}