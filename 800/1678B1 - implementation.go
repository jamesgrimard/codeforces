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
	for i:=0;i<t;i++{
		var n,tally int
		var s string
		fmt.Fscan(in,&n,&s)
		for j:=1;j<len(s);j+=2{
			if s[j] == s[j-1] {
				continue
			}
			tally++
		}
		fmt.Fprintln(out,tally)
	}
}

// tally unequal pairs