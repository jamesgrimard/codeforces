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
	var t,tally int
	var s string
	fmt.Fscan(in,&t,&s)
	for j:=0;j<t-1;j++{
		if s[j] != s[j+1] {
			tally++
			j++
		}
	}
	fmt.Fprintln(out,t-tally)
}