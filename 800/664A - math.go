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
	var t,n string
	fmt.Fscan(in,&t,&n)
	if t == n {
		fmt.Fprintln(out,n)
	} else {
		fmt.Fprintln(out,1)
	}
}


// only number that is divisible into a,a+1,a+2...b is 1, unless a == b