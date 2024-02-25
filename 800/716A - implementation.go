//package main
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var n,t int
	fmt.Fscan(in,&n,&t)
	var tally,holder int
	for j:=0;j<n;j++{
		var x int
		fmt.Fscan(in,&x)
		if j == 0 {
			holder = x
			continue
		}
		if x - holder > t {
			tally = 0
		} else {
			tally++
		}
		holder = x
	}
	fmt.Fprintln(out,tally+1)
}