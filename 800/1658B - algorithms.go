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
		var x int
		fmt.Fscan(in,&x)
		sum:= 1
		for j:=1;j<=x/2;j++{
			sum = (sum * j) % 998244353
		}
		if x & 1 == 1 {
			fmt.Fprintln(out,0)
		} else {
			fmt.Fprintln(out, (sum * sum) % 998244353)
		}
	}
}

// put the odds of even indices and evens on odd indices
// can't do this with n % 2 != 0
// tf, if n % 2 == 0 , return 0; else
// *variations = (n / 2)! factoral * 2 
//  _  e  _  e  _  e 	1,3,5 stay on e, 2,4,6 stay on _
// 3*2 * 3*2
// _ e _ e 	1,2 3,4
// 1*2 * 1*2
// _ e _ e _ e _ e _ e 	2,4,6,8,10 1,3,5,7,9
// 