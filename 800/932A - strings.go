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
	var s string
	fmt.Fscan(in,&s)
	for j:=len(s)-1;j>=0;j--{
		fmt.Fprintf(out,"%v",string(s[j]))
	}
	fmt.Fprintf(out,s)
}