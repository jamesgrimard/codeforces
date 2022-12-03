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
	var ans bool = false
	for i:=0;i<t;i++{
		var s string
		var before,after int
		fmt.Fscan(in,&s,&before,&after)
		if before >= 2400 && after > before {
			ans = true
		}
	}
	if ans == true {
		fmt.Fprintln(out,"YES")
	} else {
		fmt.Fprintln(out,"NO")
	}
}