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
	var t,f4,f7,s4,s7 int
	var s string
	fmt.Fscan(in,&t,&s)
	for j:=0;j<t;j++{
		if j < t/2 {
			if s[j] == 52 {
				f4++
			} else if s[j] == 55 {
				f7++
			}
		} else {
			if s[j] == 52 {
				s4++
			} else if s[j] == 55 {
				s7++
			}
		}
	}
	if f4+f7+s4+s7 != t || f4*4+f7*7 != s4*4+s7*7 {
		fmt.Fprintln(out,"NO")
	} else {
		fmt.Fprintln(out,"YES")
	}
}

// tallied 4's,7s if first and second half of string
// if total sum of 4,7's != n , return no || first half sum != second half sum return no
// else, return yes