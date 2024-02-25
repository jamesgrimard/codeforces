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
		if string(s[0]) != "A" || string(s[len(s)-1]) != "B" {
			fmt.Fprintln(out,"NO")
			continue
		}
		var zeros,ones int
		for j:=0;j<len(s);j++{
			if string(s[j]) == "A" {
				zeros++
			} else {
				ones++
			}
			if ones > zeros {
				fmt.Fprintln(out,"NO")
				goto out
			}
		}
		fmt.Fprintln(out,"YES")
		out:
	}
}


// more b's than a's at every point || 1 b not at end || no b's