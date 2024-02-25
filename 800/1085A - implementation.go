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
	var s,a string
	fmt.Fscan(in,&s)

	var n int

	if len(s) & 1 == 1 {
		n = len(s)/2
	} else {
		n = len(s)/2 - 1
	}

	a = string(s[n])

	for i:=1;i<len(s);i++{
		if i & 1 == 1 {
			n += i
		} else {
			n -= i
		}
		a += string(s[n])
	}
	fmt.Fprintln(out,a)
}
// task is to decrypt, reverse
