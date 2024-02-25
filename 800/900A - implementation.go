//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
)
type Pair struct {
	school int
	dmg int
}
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t,n,p int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var y,x int
		fmt.Fscan(in,&y,&x)
		if y < 0 {
			n++
		} else {
			p++
		}
	}
	if n > 1 && p > 1 {
		fmt.Fprintln(out,"NO")
	} else {
		fmt.Fprintln(out,"YES")
	}
}
