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
	var t,count int
	var s string
	fmt.Fscan(in,&t,&s)
	for j:=0;j<len(s);j++{
		if string(s[j]) == "8"{
			count++	
		}
	}
	fmt.Fprintln(out,min(t/11,count))
}
func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}