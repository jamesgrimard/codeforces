package main
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
		if abs(a+c-b*2)%3 == 0 {
			fmt.Fprintln(out,0)
		} else {
			fmt.Fprintln(out,1)
		}
	}
}
func abs(x int) int {
	if x < 0 {
		return x*-1
	}
	return x
}