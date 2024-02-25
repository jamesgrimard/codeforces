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
	var n,m int
	var s string
	fmt.Fscan(in,&n,&m,&s)
	a:= []byte(s)
	for i:=0;i<m;i++{
		var l,r int
		var c1,c2 string
		fmt.Fscan(in,&l,&r,&c1,&c2)
		for j:=l-1;j<=r-1;j++{
			if string(a[j]) == c1 {
				a[j] = c2[0]
			}
		}
	}
	for j:=0;j<n;j++{
		fmt.Fprintf(out,"%v",string(a[j]))
	}
}