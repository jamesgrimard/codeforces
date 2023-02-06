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
		var n,o,e int
		fmt.Fscan(in,&n)
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x & 1 == 1 {
				o++
			} else {
				e++
			}
		}
		if e & 1 == 1 {
			fmt.Fprintln(out,"errorgorn")
		} else {
			fmt.Fprintln(out,"maomao90")
		}
	}
}

// player 1 wins all evens logs, player 2 - odds
// if Count(evens) is odd return player 1, else player 2