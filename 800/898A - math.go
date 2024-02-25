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
	if t % 10 == 0 {
		fmt.Fprintln(out,t)
	} else if t % 10 < 5 {
		fmt.Fprintln(out,t-(t%10))
	} else {
		fmt.Fprintln(out,t+(10-(t%10)))
	}
}

// if remainder is closer to ceiling: 10-remainder + x
// else, x - remainder