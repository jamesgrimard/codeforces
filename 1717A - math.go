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
	for i:=0;i<t;i++{
		var n int
		fmt.Fscan(in,&n)
		fmt.Fprintln(out, ((int(n/2) + int(n/3)) * 2 + n))
	}
}

// find all integers between 1:n that are divisible by 2 or 3
// ie n = 10, (1,2) (2,4) (3,6) (4,8) (5,10)
// (1,3) (2,6) (3,9)
// include all 1,1 2,2 3,3........
// so n/2 + n/3 + n