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
	var a,b int 
	fmt.Fscan(in,&a,&b)
	t := abs(a - b)
	a = t / 2
	b = a
	if t & 1 == 1 {
		b++
	}
	a = (a * a + a) / 2
	b = (b * b + b) / 2
	fmt.Fprintln(out,a+b)
}
func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}