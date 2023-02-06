//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
)
func main() {
	var in = bufio.NewReader(os.Stdin)
	var out = bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t,ones,twos int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var x int
		fmt.Fscan(in,&x)
		if x == 1 {
			ones++
		} else {
			twos++
		}
	}
	var total int
	if twos > 0 && ones > 0 {
		total += min(twos,ones)
		ones -= total
		total += ones/3
	} else {
		total += ones/3
	}
	fmt.Fprintln(out,total)
}
func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}