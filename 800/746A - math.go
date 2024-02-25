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
	var a,b,c int
	fmt.Fscan(in,&a,&b,&c)
	s:= min(b/2,c/4)
	fmt.Fprintln(out,min(a,s)*7)
}
func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}
// a == max , ans <= a the maxmimum amount of compote will be the lowest requirement which is varaible a
// divide current tally of b,c by 2,4 as per the recipe ratio, respectively 
// s = min(b/2,c/4) find the minimum stock supply of these to inputs
// min(a,s) // find minimum of the minimum
// multiply ans by 7 as problem asks how much fruit in total can you use
