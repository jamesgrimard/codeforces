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
	var t int
	fmt.Fscan(in,&t)
	a:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
	}
	var mins int
	for j:=0;j<t;j++{
		if a[j] - mins > 15 {
			break
		}
		mins = a[j]
	}
	mins += 15
	fmt.Fprintln(out,min(mins,90))
}
func min(a,b int) int {
	if a<=b{
		return a
	}
	return b
}