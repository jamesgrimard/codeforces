//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
)
type Pair struct {
	school int
	dmg int
}
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Fscan(in,&n)
		var sum,MOD uint64 = 1,1000000007
		for j:=3;j<=n*2;j++{
			sum = sum * uint64(j) % MOD
		}
		fmt.Fprintln(out,sum)
	}
}
