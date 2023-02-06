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
	if t < 999 {
		fmt.Fprintln(out,t+2)
	} else {
		fmt.Fprintln(out,1)
	}
	
}

// a number * (number + 2) will always be composite
// repsect constraint of < 1000
// 999 * 1 + 1 == 1000 , composite
// 1000 * 1 + 1 == 1001 , composite