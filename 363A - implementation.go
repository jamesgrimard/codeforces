//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
)
func main() {
	var in = bufio.NewReader(os.Stdin)
	var out = bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	if t == 0 {
		fmt.Fprintln(out,"O-|-OOOO")
	}
	for t != 0 {
		var s string
		if t % 10 < 5 {
			s += "O-|"
			for k:=0;k<t%10;k++{
				s += "O"
			}
			s += "-"
			for k:=0;k<4-(t%10);k++{
				s += "O"
			}
		} else {
			s += "-O|"
			for k:=0;k<(t%10)-5;k++{
				s += "O"
			}
			s += "-"
			for k:=0;k<9-(t%10);k++{
				s += "O"
			}
		}
		t /= 10
		fmt.Fprintln(out,s)
	}
}