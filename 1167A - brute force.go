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
		for j:=0;j<n;j++{
			if string(s[j]) == "8" {
				if n - j >= 11 {
					fmt.Fprintln(out,"YES")
					goto out
				}
			}
		}
		fmt.Fprintln(out,"NO")
		out:
	}
}

// iterate over number, search for an 8
// minus index of 8 from len n
// must be atleast 10 digits after 8