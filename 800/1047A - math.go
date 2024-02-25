//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
)
type KV struct {
	Index int
	Value int
}
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	a:= t-2
	b:= 1
	for (a % 3) == 0 {
		a--
		b++
	}
	for (b % 3) == 0 {
		a--
		b++
	}
	fmt.Fprintln(out,a,b,1)
}

// find 3 numbers that sum to input and are not divisible by 3, ie n % 3 != 0
// keep c as 1
// iterate over a,b starting at n-2,1 -> n-2 -- , 1 ++