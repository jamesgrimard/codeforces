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
	a = append(a[1:],a...)
	var x,y,sum1,sum2 int
	fmt.Fscan(in,&x,&y)
	if x == y {
		fmt.Fprintln(out,0)
		goto out
	}
	if x <= y {
		x += (t-2)
		y += (t-2)
		for j:=x;j<y;j++{
			sum1 += a[j]
		}
		y -= t
		for j:=x-1;j>=y;j--{
			sum2 += a[j]
		}
	} else {
		x -= 2
		y += (t-2)
		for j:=x;j<y;j++{
			sum1 += a[j]
		}
		x += t
		for j:=x-1;j>=y;j--{
			sum2 += a[j]
		}
	}
	fmt.Fprintln(out,min(sum1,sum2))
	out:
}
func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}