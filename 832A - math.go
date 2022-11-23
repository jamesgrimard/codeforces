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
	var t,x int
	fmt.Fscan(in,&t,&x)
	if (t / x) & 1 == 1 {
		fmt.Fprintln(out,"YES")
	} else {
		fmt.Fprintln(out,"NO")
	}
}

// removing x many elements from a length of t
// player must remove strictly more elements than rival, player moves first
// max moves represented as t / x
// if  t / x == even then both players removed the same amount of elements and player loses
// else, t / x == odd , player wins