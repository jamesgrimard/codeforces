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
		var a,b,c,sum int
		fmt.Fscan(in,&a,&b,&c)
		c /= 2
		sum += (min(b,c)*3)
		b -= min(b,c)
		b /= 2 
		sum += (min(a,b)*3)
		fmt.Fprintln(out,sum)
	}
}

func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}

// c pile can only be reduced by 2
// b pile can be reduced by 2 & 1
// a pile reduced by 1
// divide c pile by 2 to and take the min of b,c then times by 3 for the sum,
// reduce min from b pile and then repeat for b pile...