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
		var n,k int
		fmt.Fscan(in,&n,&k)
		for j:=1;j<=n;j++{
			if j % 3 == 1 {
				fmt.Fprintf(out,"c")
			} else if j % 3 == 2 {
				fmt.Fprintf(out,"b")
			} else {
				fmt.Fprintf(out,"a")
			}
		}
		fmt.Fprintln(out)
	}
}

// palindrome reads likewise front and back 
// problem does not state that it is required for string to have a substring that is a palindrome,
// it only requires that if you do choose to have one, then it must not exceed k characters
// there is no need to include a palindrome
// print a for loop with 3 fixed outcomes for modulo of 3