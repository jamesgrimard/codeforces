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
	var t,total int
	fmt.Fscan(in,&t)
	a:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
		total += a[i]
	}
	var c int = a[0]
	var b []int = []int{1}
	for j:=1;j<t;j++{
		if a[0] >= a[j] * 2 {
			c += a[j]
			b = append(b,j+1)
		}
	}
	if float64(c) / float64(total) * 100.00 > 50.00 {
		fmt.Fprintln(out,len(b))
		for j:=0;j<len(b);j++{
			fmt.Fprintf(out,"%v ",b[j])
		}
	} else {
		fmt.Fprintln(out,0)
	}
}