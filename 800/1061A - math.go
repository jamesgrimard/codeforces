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
	var a,b int
	fmt.Fscan(in,&a,&b)
	if b%a == 0 {
		fmt.Fprintln(out,b/a)
	} else {
		fmt.Fprintln(out,b/a+1)
	}
}
