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
	var a,b,c,sum int
	fmt.Fscan(in,&a,&b,&c)
	c *= 2
	sum += c
	sum += min(a,b)*2
	if a != b {
		sum++
	}
	fmt.Fprintln(out,sum)
}

func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}