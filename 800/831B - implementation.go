//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
    "strings"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var a,b,c string
	fmt.Fscan(in,&a,&b,&c)
	m:= make(map[string]string)
	for j:=0;j<26;j++{
		m[string(a[j])] = string(b[j])
	}
	for j:=0;j<len(c);j++{
		if m[strings.ToLower(string(c[j]))] == "" {
			fmt.Fprintf(out,"%v",string(c[j]))
		} else if m[string(c[j])] == "" {
			fmt.Fprintf(out,"%v",strings.ToUpper(m[strings.ToLower(string(c[j]))]))
		} else {
			fmt.Fprintf(out,"%v",m[string(c[j])])
		}
	}
	fmt.Fprintln(out)
}
// create map with string,string
// check if input lowercase is not in map, if true, return input
// check if input not in map, return lowercase to uppercase map input
// print map key value