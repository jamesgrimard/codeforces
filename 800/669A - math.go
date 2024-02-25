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
	var t int
	fmt.Fscan(in,&t)
	if t % 3 != 0 {
		fmt.Fprintln(out,t/3*2+1)
	} else {
		fmt.Fprintln(out,t/3*2)
	}
}