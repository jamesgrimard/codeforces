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
		var a,b,c int
		fmt.Fscan(in,&a,&b,&c)
		if a - b - c > 1 || (a == b && a == c) {
			fmt.Fprintln(out,"Yes")
		} else {
			fmt.Fprintln(out,"No")
		}
	}
}

// prefix: 
// consider array [1 2 3 4 5 6 7]
// prefix counts from left side (starting side): Ap = [1 2 3 4 5] or [1 2] or [1 2 3 4 5 6 7]

// suffix: 
// counts from right side (end) As = [7 6 5 4] or [7 6] or [7] or [7 6 5 4 3 2 1]

// LCP or LCS * key words "longest common"
// meaning that if LCP = 4 and the array is a: [1 2 3 4 5 6 7] b: [1 2 3 4 19 23 46]
// [1 2 3 4] is the longest COMMON prefix, appearing in both arrays, notice b[4] == 19
// if the LCP is < the length of the array, then the succeeding element must be different in order
// to satisfy the end ie: b[4] = 19