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
		m:= make(map[byte]int)
		for j:=0;j<len(s);j++{
			m[s[j]]++
		}
		for j:=0;j<len(s);j++ {
			if m[s[j]] > 1 {
				m[s[j]]--
				continue
			}
			for k:=j;k<len(s);k++ {
				fmt.Fprintf(out,"%v",string(s[k]))
			}
			break
		}
		fmt.Fprintln(out)
	}
}

// map all letters in string
// iterate over string and check each letter for count == 1
// once you've found the first distinct letter, print remainder of string