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
		var s string
		fmt.Fscan(in,&s)
		for j:=0;j<len(s);j++{
			fmt.Fprintf(out,"%v",string(s[j]))
		}
		for j:=len(s)-1;j>=0;j--{
			fmt.Fprintf(out,"%v",string(s[j]))
		}
		fmt.Fprintln(out)
	}
}