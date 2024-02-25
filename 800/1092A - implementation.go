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
		var n,k int
		fmt.Fscan(in,&n,&k)
		for j:=0;j<n/k;j++{
			for l:=0;l<k;l++{
				fmt.Fprintf(out,"%v",string(l+97))
			}
		}
		for j:=0;j<n%k;j++{
			fmt.Fprintf(out,"%v",string(j+97))
		}
		fmt.Fprintln(out)
	}
}

// running nested loop with outer loop iterating over n/k
// running post loop with n%k to print remainder sequence
// ie n=7,k=3
// for i<7/3...
// 		for j<k...
// for i<7%3...