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
	var s string
	fmt.Fscan(in,&s)
	if s == "a1" || s == "a8" || s == "h1" || s == "h8" {
		fmt.Fprintln(out,3)
	} else if string(s[0]) == "a" || string(s[0]) == "h" || string(s[1]) == "1" || string(s[1]) == "8" {
		fmt.Fprintln(out,5)
	} else {
		fmt.Fprintln(out,8)
	}
}