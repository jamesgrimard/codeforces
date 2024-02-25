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
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n,m int
		var s string
		fmt.Fscan(in,&n,&m,&s)
		s = "0" + s + "0"
		for j:=0;j<m;j++{
			var a strings.Builder
			a.WriteString("0")
			var chng bool = false
			for k:=1;k<=n;k++{
				if s[k] == 48 && ((s[k-1] == 48 && s[k+1] == 49) || (s[k-1] == 49 && s[k+1] == 48)) {
					a.WriteString("1")
					chng = true
					continue
				}
				a.WriteString(string(s[k]))
			}
			if chng == false {
				break
			}
			a.WriteString("0")
			s = a.String()
		}
		s = s[1:n+1]
		fmt.Fprintln(out,s)
	}
}
		
// don't even bother with this piece of shit question...

// time constraints are the major issue with this problem'
// firstly, you can only complete this problem using strings.Builder
// your'e given 2 inputs, n,m
// to solve this problem you will need create a temp holding variable string that you will make with strings.Builder
// with each iteration update this string
// at the end of each outer loop update the main string with the tmp holder string
// create a nested loop and create the iteration function that operates over 0,i,1 or 1,i,0
// if i is equal to either of these, insert 1 into WriteString
// to overcome the issue of the head and tail of the string, append a 0 to each each end and keep the
// 1->n range for all the operations, when complete, return string[1:n+1]