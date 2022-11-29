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
	var t,e int
	fmt.Fscan(in,&t)
	var s string
	fmt.Fscan(in,&s)
	for k:=0;k<t;k++{
		if s[k] & 1 == 1 {
			continue
		}
		e += (k + 1)
	} 
	fmt.Fprintln(out,e)
}

// iterate over the string, if s[i] % 2 == 0 (even) record the index and add 1 ie sum += (i + 1)
// there will be i l,r pairs and add 1 for the single 1length substring i