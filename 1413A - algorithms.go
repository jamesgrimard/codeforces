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
			fmt.Fscan(in,&a[j])
			if j & 1 == 1 {
				fmt.Fprintf(out,"%v %v ",a[j]*-1,a[j-1])
			}
		}
		fmt.Fprintln(out)
	}
}

// diagonal multiplication to neutralise each pair
// ie [2 3]
// 	  [-3 2]
// == 2*-3 == -6 + 6 = 0