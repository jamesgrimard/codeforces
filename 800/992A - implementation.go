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
	fmt.Fscan(in,&t)
	m:= make(map[int]bool)
	for j:=0;j<t;j++{
		var x int
		fmt.Fscan(in,&x)
		if m[x] == true || x == 0 {
			continue
		}
		m[x] = true
		count++
	}
	fmt.Fprintln(out,count)
}