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
	var t,k,sum int
	fmt.Fscan(in,&t,&k)
	for i:=0;i<t;i++{
		var x int
		fmt.Fscan(in,&x)
		sum += x
	}
	var o int
	if sum % k != 0 {
		o = 1
	}
	fmt.Fprintln(out,(abs(sum)/k)+o)
}

func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}

// any remainder requires an extra card