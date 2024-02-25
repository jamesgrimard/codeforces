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
	var s string
	fmt.Fscan(in,&s)
	m:= make(map[string]bool)
	m["a"] = true
	m["e"] = true
	m["i"] = true
	m["o"] = true
	m["u"] = true
	m["1"] = true
	m["3"] = true
	m["5"] = true
	m["7"] = true
	m["9"] = true
	count:= 0
	for j:=0;j<len(s);j++{
		if m[string(s[j])] == true {
			count++
		}
	}
	fmt.Fprintln(out,count)
}
// must turn vowels to confirm an even number on other side
// must turn odd numbers to confirm a vowel on other side