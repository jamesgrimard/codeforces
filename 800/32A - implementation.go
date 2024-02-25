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
	var t,m,count int
	fmt.Fscan(in,&t,&m)
	a:= make([]int,t)
	for j:=0;j<t;j++{
		fmt.Fscan(in,&a[j])
	}
	for j:=0;j<t;j++{
		for k:=j+1;k<t;k++{
			if abs(a[j] - a[k]) <= m {
				count++
			}
		}
	}
	fmt.Fprintln(out,count*2)
}
func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}