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
	var s string
	fmt.Fscan(in,&t,&s)
	var z,o int
	for i:=0;i<t;i++{
		if string(s[i]) == "0" {
			z++
		} else {
			o++
		}
	}
	if o > 0 {
		fmt.Fprintf(out,"1")
	}
	for i:=0;i<z;i++{
		fmt.Fprintf(out,"0")
	}
}