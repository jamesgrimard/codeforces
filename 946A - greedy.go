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
	var t,sum int
	fmt.Fscan(in,&t)
	for j:=0;j<t;j++{
		var x int
		fmt.Fscan(in,&x)
		sum += abs(x)
	}
	fmt.Fprintln(out,sum)
}
func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}