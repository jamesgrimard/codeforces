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
		var n,sum int
		fmt.Fscan(in,&n)
		var s string
		fmt.Fscan(in,&s)
		for j:=n-1;j>=0;j--{
			if s[j] == 65 {
				sum++
			} else {
				sum--
			}
			if sum < 0 {
				fmt.Fprintln(out,"No")
				goto out
			}
		}
		fmt.Fprintln(out,"Yes")
		out:
	}
}

// iterate over a string of n occurences, find if any question goes unanswered
// quickest and cleanest way to iterate is in reverse (starting at the end)
// iterate back to front and ++ if there's an answer and -- if there's a question
// if at any point there is a negative sum, meaning more q's then a's provided, then return no