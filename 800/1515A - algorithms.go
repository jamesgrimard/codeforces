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
		var n,w,summer int
		fmt.Fscan(in,&n,&w)
		list:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
			summer+=list[j]
		}
		if summer == w {
			fmt.Fprintln(out,"NO")
			continue
		}
		var sum int
		for j:=0;j<n;j++{
			if list[j]+sum == w {
				if j == n-1 {
					list[j],list[j-1] = list[j-1],list[j]
				} else {
					list[j],list[j+1] = list[j+1],list[j]
				}
				break
			}
			sum+=list[j]
		}
		fmt.Fprintln(out,"YES")
		for j:=0;j<n;j++{
			fmt.Fprintf(out,"%v ",list[j])
		}
		fmt.Fprintln(out)
	}	
}
