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
	var a,b,c,d,e,f,sum,sum2 int
	fmt.Fscan(in,&a,&b,&c,&d,&e,&f)
	sum += min(a,d)*e
	sum += min3(b,c,d-min(a,d))*f
	sum2 += min3(b,c,d)*f
	sum2 += min(a,d-min3(b,c,d))*e
	fmt.Fprintln(out,max(sum,sum2))
}
func max(a,b int) int {
	if a>=b {
		return a
	}
	return b
}
func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}
func min3(a,b,c int) int {
	if a <= b && a <= c {
		return a
	}
	if b <= a && b <= c {
		return b
	}
	return c
}