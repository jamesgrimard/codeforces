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
	var t,k float64
	fmt.Fscan(in,&t,&k)
	var a []float64
	for j:=0;j<int(t);j++{
		var x,y float64
		fmt.Fscan(in,&x,&y)
		a = append(a,x/y)
	}
	if t == 1 {
		fmt.Fprintln(out,a[0]*k)
	} else {
		for j:=1;j<len(a);j++{
			if a[j] < a[j-1] {
				a[j] , a[j-1] = a[j-1] , a[j]
				j -= 2
				if j < 0 {
					j = 0
				}
			}
		}
		fmt.Fprintln(out,a[0]*k)
	}
}