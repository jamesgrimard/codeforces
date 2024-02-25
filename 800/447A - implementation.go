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
	var n,k int
	fmt.Fscan(in,&n,&k)
	m:= make(map[int]int)
	for j:=1;j<=n;j++{
		m[j] = 0
	}
	var fin int = -1
	for j:=0;j<k;j++{
		var x int
		fmt.Fscan(in,&x)
		if m[x%n] != 0 && fin == -1 {
			fin = j + 1
		}
		m[x%n]++
	}
	fmt.Fprintln(out,fin)
}