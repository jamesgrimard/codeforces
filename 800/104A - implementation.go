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
	if t <= 10 || t > 21 {
		fmt.Fprintln(out,0)
	} else if t == 20 {
		fmt.Fprintln(out,15)
	} else {
		fmt.Fprintln(out,4)
	}
}