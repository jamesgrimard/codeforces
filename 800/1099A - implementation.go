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
	var w,h int
	fmt.Fscan(in,&w,&h)
	var stone_1_w,stone_1_h int
	fmt.Fscan(in,&stone_1_w,&stone_1_h)
	var stone_2_w,stone_2_h int
	fmt.Fscan(in,&stone_2_w,&stone_2_h)
	for j:=h;j>0;j--{
		w += j
		if stone_1_h == j {
			w -= stone_1_w
		}
		if stone_2_h == j {
			w -= stone_2_w
		}
		if w <= 0 {
			w = 0
		}
	}
	fmt.Fprintln(out,w)
}