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
		var n int
		fmt.Fscan(in,&n)
		list:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		for j:=0;j<n;j++{
			sum:=0
			for k:=0;k<n;k++{
				if k == j {
					continue
				}
				sum+=list[k]
			}
			if float64(sum)/float64(n-1) == float64(list[j]) {
				fmt.Fprintln(out,"YES")
				goto out
			}
		}
		fmt.Fprintln(out,"NO")
		out:
	}
}