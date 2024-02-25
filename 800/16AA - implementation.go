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
	fmt.Fscan(in,&n,&m)
	s:= make([]string,n)
	for i:=0;i<n;i++{
		fmt.Fscan(in,&s[i])
	}            
	for i:=0;i<n;i++{
		for j:=1;j<m;j++{
			if s[i][j] != s[i][j-1] {
				fmt.Fprintln(out,"NO")
				goto out
			}
			if i != 0 && (s[i][0] == s[i-1][0] || s[i][j] == s[i-1][j]) {
				fmt.Fprintln(out,"NO")
				goto out
			} 
		}
	}
	fmt.Fprintln(out,"YES")
	out:

}
