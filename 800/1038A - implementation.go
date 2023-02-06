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
	var n,k int
	var s string
	fmt.Fscan(in,&n,&k,&s)
	m:= make(map[string]int)
	for j:=0;j<n;j++{
		m[string(s[j])]++
	}
	var min int = 999999
	if len(m) == k {
		for _,v := range m {
			if v < min {
				min = v
			} 
		}
		fmt.Fprintln(out,min*k)
	} else {
		fmt.Fprintln(out,0)
	}
}