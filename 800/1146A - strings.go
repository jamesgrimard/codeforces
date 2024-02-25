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
	var t string
	fmt.Fscan(in,&t)
	tally:=0
	for j:=0;j<len(t);j++{
		if string(t[j]) == "a" {
			tally++
		}
	}
	fmt.Fprintln(out,min(tally*2-1,len(t)))
}
func min(a,y int) int {
	if a <= y {
		return a
	}
	return y
}