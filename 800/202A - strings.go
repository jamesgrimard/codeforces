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
	var s string
	fmt.Fscan(in,&s)
	a:= []byte(s)
	for j:=1;j<len(a);j++{
		if a[j] < a[j-1] {
			a[j] , a[j-1] = a[j-1] , a[j]
			j -= 2
			if j < 0 {
				j = 0
			}
		}
	}
	for j:=len(a)-1;j>=0;j--{
		fmt.Fprintf(out,"%v",string(a[j]))
		if j == 0 || a[j] != a[j-1] {
			break
		}
	}
	fmt.Fprintln(out)
}