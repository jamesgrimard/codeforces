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
		var n int
		var x,y string
		fmt.Fscan(in,&n,&x,&y)
		var u,l int
		for j:=0;j<n;j++{
			if x[j] > y[j] {
				u++
			} else if x[j] < y[j] {
				l++
			}
		}
		if u == l {
			fmt.Fprintln(out,"EQUAL")
		} else if u > l {
			fmt.Fprintln(out,"RED")
		} else {
			fmt.Fprintln(out,"BLUE")
		}
	}
}

// input ints as strings
// iterate over each digit as a byte and see if > and tally