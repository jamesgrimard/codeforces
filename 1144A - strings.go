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
		m:= make(map[byte]bool)
		r:= []rune(s)
		for j:=0;j<len(s);j++{
			if m[s[j]] == true {
				fmt.Fprintln(out,"No")
				goto out
			}
			m[s[j]] = true
		}
		for j:=1;j<len(r);j++{
			if r[j] < r[j-1] {
				r[j] , r[j-1] = r[j-1] , r[j]
				j-=2
				if j < 0 {
					j = 0
				}
			}
		}
		for j:=1;j<len(r);j++{
			if r[j] != r[j-1]+1 {
				fmt.Fprintln(out,"No")
				goto out
			}
		}
		fmt.Fprintln(out,"Yes")
		out:
	}
}

// use map to check for repeat elements
// create rune array of string
// sort array
// check if r[j]+1 == r[j+1]