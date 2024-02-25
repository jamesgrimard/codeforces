//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
)
func main() {
	var in = bufio.NewReader(os.Stdin)
	var out = bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t,s1,s2 int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var x int
		fmt.Fscan(in,&x)
		s1 += x
	}
	for i:=0;i<t;i++{
		var x int
		fmt.Fscan(in,&x)
		s2 += x
	}
	if s2 > s1 {
		fmt.Fprintln(out,"No")
	} else {
		fmt.Fprintln(out,"Yes")
	}
}