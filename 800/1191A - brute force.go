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
	if t % 4 == 1 {
		fmt.Fprintln(out,0,"A")
	} else if t % 4 == 3 {
		fmt.Fprintln(out,2,"A")
	} else if t % 4 == 2 {
		fmt.Fprintln(out,1,"B")
	} else {
		fmt.Fprintln(out,1,"A")
	}
}

// if remainder 1 then just leave it as is