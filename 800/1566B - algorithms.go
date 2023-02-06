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
		var s string
		fmt.Fscan(in,&s)
		var count,tally int
		for j:=0;j<len(s);j++{
			if string(s[j]) == "0" {
				count++
			}
			if string(s[j]) == "1" {
				if count > 0 {
					tally++
					count = 0
				}
			}
		}
		if count > 0 {
			tally++
		}
		fmt.Fprintln(out,min(tally,2)) 
	}
}
func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}

// only occurences in a binary string are 0,1
// you are required to find the smallest sum given that you can split the string into, at most n subsets
// the maximum sum of all samples will be 2 ie: 01010101, the minimum will be 0 ie: 11111111
// iterate over the string and add a count to the zero's, if s[j] == 1 : + 1 to a new tally and set count to 0
// add a condition at the end of the iteration such that, if the count ends > 0, + 1 to the tally.
// ie a string like 01100, the ending count is 2 so we need to acknowledge this with a + 1 to count 
// because the ending substring is 00 -> 1
// given that we now have our tally value, return the min of tally and 2