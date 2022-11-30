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
		var n,m int
		fmt.Fscan(in,&n,&m)
		fmt.Fprintln(out,2*m)
	}
}

// 1 2 3 4 5 6 7 8 9 10
//   2 3 4 5 6 7 8 9 10
//   2   4 5 6 7 8 9 10
//   2   4   6 7 8 9 10
//   2   4   6   8 9 10
//   2   4   6   8   10