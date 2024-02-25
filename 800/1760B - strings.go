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
		var s string
		fmt.Fscan(in,&n,&s)
		var max byte = 0
		for j:=0;j<n;j++{
			if s[j] > max {
				max = s[j]
			}
		}
		fmt.Fprintln(out,max-96)
	}
}

// iterate over each element of string and check against max, if > max, then update max
// take max and subtract 96 which is the starting byte for 'a' to find deepest element