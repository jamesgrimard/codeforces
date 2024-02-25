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
	var t,tally int
	fmt.Fscan(in,&t)
	a:= make([]string,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
	}
	for j:=1;j<t-1;j++{
		for k:=1;k<t-1;k++{
			if string(a[j][k]) == "X" { // if we find an X, begin search at corners
				if string(a[j-1][k-1]) == "X" && string(a[j+1][k+1]) == "X" && string(a[j-1][k+1]) == "X" && string(a[j+1][k-1]) == "X" {
					tally++
				}
			}
		}
	}
	fmt.Fprintln(out,tally)
}