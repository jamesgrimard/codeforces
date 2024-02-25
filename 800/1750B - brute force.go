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
		var n,count,zeros,ones int
		var s string
		fmt.Fscan(in,&n,&s)
		if len(s) == 1 {
			fmt.Fprintln(out,1)
			continue
		}
		tally:= 1
		if s[0] == 48 {
			zeros++
		} else {
			ones++
		}
		for j:=1;j<n;j++{
			if s[j] == 48 {
				zeros++
			} else {
				ones++
			}
			if s[j] == s[j-1] {
				tally++
			}
			if s[j] != s[j-1] || j == n-1 {
				if tally > count {
					count = tally
				}
				tally = 1
			}
		}
		fmt.Fprintln(out,max(zeros*ones,count*count))
	}
}

func max(a,b int) int {
	if a >= b {
		return a
	}
	return b
}

// strong time constiction in this problem, ensure only 1 for loop, check for 0's,1's count  and tally homogenous 
// sub arrays