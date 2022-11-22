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
	var f,s,f2,s2 int
	fmt.Fscan(in,&f,&s,&f2,&s2)
	if f > s {
		fmt.Fprintln(out,"First")
	} else {
		fmt.Fprintln(out,"Second")
	}
}

// First player moves first so the advantage goes to player 2 if they both are quantities
