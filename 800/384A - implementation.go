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
	if t & 1 == 1 {
		fmt.Fprintln(out,t*t/2+1)
	} else {
		fmt.Fprintln(out,t*t/2)
	}
	for i:=0;i<t;i++{
		for j:=0;j<t;j++{
			if i % 2 == j % 2 {
				fmt.Fprintf(out,"C")
			} else {
				fmt.Fprintf(out,".")
			}
		}
		fmt.Fprintln(out)
	}
}

// every other cell is a coder cell, for odd rows, shift left 1