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
		var s string
		fmt.Fscan(in,&n,&s)
		a:= make([]int,n)
		for j:=0;j<n;j++{
			if string(s[j]) == "P" {
				a[j] = 0
			} else {
				a[j] = 1
			}
		}
		for j:=0;j<n;j++{
			var finished bool = true
			for k:=1;k<n;k++{
				if a[k-1] == 1 && a[k] == 0 {
					a[k] |= a[k-1]
					k++
					finished = false
				}
			}
			if finished == true {
				fmt.Fprintln(out,j)
				break
			}
		}	
	}
}
