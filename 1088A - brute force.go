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
	if t % 2 == 0 {
		fmt.Fprintln(out,t,2)
	} else if t % 3 == 0 {
		fmt.Fprintln(out,t,3)
	} else if (t-1) % 2 == 0 && t-1 > 0 {
		fmt.Fprintln(out,t-1,2)
	} else {
		fmt.Fprintln(out,-1)
	}
}