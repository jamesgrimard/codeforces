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
		a:= make([]int,n)
		for j:=0;j<n;j++{
			a[j] = j + 1
		}
		if n & 1 == 1 {
			fmt.Fprintf(out,"%v ",1)
			for j:=n/2;j>0;j--{
				fmt.Fprintf(out,"%v %v ",a[j],a[n-1-((n/2)-j)])
			}
		} else {
			for j:=n/2-1;j>=0;j--{
				fmt.Fprintf(out,"%v %v ",a[j],a[n-1-((n/2)-(j+1))])
			}
		}
		fmt.Fprintln(out)
	}
}

// maximise abs(a[i],a[i]) so that the minimum in the set is maximised
// pair max value with mid value
// ie: 1,2,3,4,5,6 -> (3,6) (2,5) (1,4)