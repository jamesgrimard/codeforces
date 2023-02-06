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
		sum:=0
		for j:=0;j<10;j++{
			if n%10 > sum {
				sum= n%10
			}
			n/=10
		}
		fmt.Fprintln(out,sum)
	}
}
