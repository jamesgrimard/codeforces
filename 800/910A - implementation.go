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
	var t,k,jumps int
	var s string
	fmt.Fscan(in,&t,&k,&s)
	for i:=0;i<t;i++{
		for j:=k;j>0;j--{
			if i+j < t && string(s[i+j]) == "1" {
				i += (j-1)
				jumps++
				goto out
			}
		}
		if i != t-1 {
			jumps = -1
			break
		}
		out:
	}
	fmt.Fprintln(out,jumps)
}