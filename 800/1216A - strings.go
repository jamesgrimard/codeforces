//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
    "strings"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t,count int
	fmt.Fscan(in,&t)
	var s string
	fmt.Fscan(in,&s)
	a:= strings.Split(s,"")
	for j:=1;j<t;j+=2{
		if s[j] != s[j-1] {
			continue
		}
		count++
		if a[j] == "b" {
			a[j] = "a"
		} else {
			a[j] = "b"
		}
	}
	fmt.Fprintln(out,count)
	if count == 0 {
		fmt.Fprintln(out,s)
	} else {
		for j:=0;j<t;j++{
			fmt.Fprintf(out,"%v",a[j])
		}
	}
}

// every pair must be either a b or b a
// count ++ if s[i] == s[i+1], change s[i] to whatever s[i+1] isn't
