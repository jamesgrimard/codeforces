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
	m:= make(map[string]bool)
	for i:=0;i<t;i++{
		var s string
		fmt.Fscan(in,&s)
		if m[s] == true {
			fmt.Fprintln(out,"YES")
			continue
		}
		m[s] = true
		fmt.Fprintln(out,"NO")
	}
}

// check if each element is already in map, if yes return 
// else return no and store it