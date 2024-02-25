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
		if n & 1 != 1 {
			n--
		}
		var count int = 1
		for j:=1;j<=n/2;j++{
			if string(s[j]) == string(s[j-1]) {
				count++
			} else {
				count = 1
			}
		}
		if len(s) & 1 == 1 {
			fmt.Fprintln(out,count*2-1)
		} else {
			fmt.Fprintln(out,count*2)
		}
	}
}

// string guarenteed to be palindrome, look for change
// start a count and reset with every new letter, stop halfway
// if len even * 2
// if len odd, if count 1, return 1, else return count * 2 - 1
// -->    <--
// a[j]		a[n-1-j]