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
	var t,g,b int
	var s string
	fmt.Fscan(in,&t,&s)
	var a []rune = []rune(s)
	for i:=1;i<t;i++ {
		if a[i-1] ==  83 && a[i] == 70 {
			g++
		} else if a[i-1] ==  70 && a[i] == 83 {
			b++
		}
	}
	if g > b {
		fmt.Fprintln(out,"YES")
	} else {
		fmt.Fprintln(out,"NO")
	}
}

// check for a change if element from F -> S or from S -> F, tally all the changes, these represent flights
// return yes if S->F > F->S