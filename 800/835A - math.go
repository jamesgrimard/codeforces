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
	var n,v1,v2,t1,t2 int
	fmt.Fscan(in,&n,&v1,&v2,&t1,&t2)

	if n * v1 + (2 * t1) == n * v2 + (2 * t2) {
		fmt.Fprintln(out,"Friendship")
	} else if n * v1 + (2 * t1) < n * v2 + (2 * t2) {
		fmt.Fprintln(out,"First")
	} else {
		fmt.Fprintln(out,"Second")
	}
}
