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
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n,sum int
		fmt.Fscan(in,&n)
		list:= make([]int,n)
		for j:=0;j<n;j++ {
			fmt.Fscan(in,&list[j])
			sum+=list[j]
		}
		if sum%n == 0 {
			fmt.Fprintln(out,0)
		} else {
			fmt.Fprintln(out,1)
		}
	}
}
