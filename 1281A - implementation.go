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
	for j:=0;j<t;j++{
		var s string
		fmt.Fscan(in,&s)
		if string(s[len(s)-1]) == "o" {
			fmt.Fprintln(out,"FILIPINO")
		} else if string(s[len(s)-1]) == "u" {
			fmt.Fprintln(out,"JAPANESE")
		} else {
			fmt.Fprintln(out,"KOREAN")
		}
	}
}
// s[len(s)-1]
// o = filipino
// u = japanese
// else korean