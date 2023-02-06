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
		var fail bool
		var count int = 1
		for j:=0;j<len(s)-1;j++{
			if string(s[j]) == string(s[j+1]) {
				count = 0
			} else {
				count++
			}
			if count > 1 {
				fail = true
				break
			}
		}
		if fail == true || count == 1 {
			fmt.Fprintln(out,"NO")
		} else {
			fmt.Fprintln(out,"YES")
		}
	}
}

// iterate through the string to find isolated elements
// start and finish iteration with an additional +1 count as head and tail are isolated
// whenever s[j] != s[j+1] ; count++ 
// if count >= 2 return NO