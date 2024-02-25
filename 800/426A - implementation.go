//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
)
func main() {
	var in = bufio.NewReader(os.Stdin)
	var out = bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t,k,mx,sum int
	fmt.Fscan(in,&t,&k)
	for i:=0;i<t;i++{
		var x int
		fmt.Fscan(in,&x)
		if x > mx {
			mx = x
		}
		sum += x
	}
	if sum - mx > k {
		fmt.Fprintln(out,"NO")
	} else {
		fmt.Fprintln(out,"YES")
	}
}