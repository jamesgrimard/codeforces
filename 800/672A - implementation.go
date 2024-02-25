//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
    "strconv"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	var s string
	for j:=1;j<=t;j++{
		s += strconv.Itoa(j)
	}
	fmt.Fprintln(out,string(s[t-1]))
}