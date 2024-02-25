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
	var s,o string
	fmt.Fscan(in,&s)
	m:= make(map[string]bool)
	m["a"] = true
	m["e"] = true
	m["i"] = true
	m["u"] = true
	m["o"] = true
	m["y"] = true
	for i:=0;i<t;i++{
		count := 0
		o += string(s[i])
		if m[string(s[i])] == true {
			for j:=i+1;j<t;j++{
				if m[string(s[j])] == true {
					count++
					continue
				}
				break
			}
			i += count
		}
	}
	fmt.Fprintln(out,o)
}