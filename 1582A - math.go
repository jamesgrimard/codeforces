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
		var a,b,c int
		fmt.Fscan(in,&a,&b,&c)
		b *= 2
		c *= 3
		total:= (a + b + c)%2
		fmt.Fprintln(out,total)
	}
}
func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}

// take total and distribute into 2 groups, ie total % 2