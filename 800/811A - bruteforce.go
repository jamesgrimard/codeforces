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
	var a,b,t int 
	fmt.Fscan(in,&a,&b)
	t = a + b
	for i:=1;i<=t;i++{
		if i & 1 == 1 {
			a -= i
		}
		if i & 1 == 0 {
			b -= i
		}
		if a < 0 || b < 0 {
			break
		}
	}
	if a < b {
		fmt.Fprintln(out,"Vladik")
	} else {
		fmt.Fprintln(out,"Valera")
	}
}