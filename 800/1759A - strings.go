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
		a:= make([]int,len(s))
		for j:=0;j<len(s);j++{
			if string(s[j]) == "Y" {
				a[j] = 0
			} else if string(s[j]) == "e" {
				a[j] = 1
			} else if string(s[j]) == "s" {
				a[j] = 2
			} else {
				fmt.Fprintln(out,"NO")
				goto out
			}
		}
		if len(s) == 1 {
			fmt.Fprintln(out,"YES")
			goto out
		}
		for j:=1;j<len(a);j++{
			if (a[j] - a[j-1] == 1) || (a[j] == 0 && a[j-1] == 2) {
				continue
			}
			fmt.Fprintln(out,"NO")
			goto out
		}
		fmt.Fprintln(out,"YES")
		out:
	}
}

// 0's must have 2 or nothing to left or 1 or nothing to right a[j-1]==2,j==0 , a[j+1]==1,j==n-1
// 1's must have 0 or nothing to left or 2 or nothing to right a[j-1]==0,j==0 , a[j+1]==2,j==n-1
// 2's must have 1 or nothing to left or 0 or nothing to right -> a[j-1]==1,j==0 , a[j+1]==0,j==n-1

// a[i] - a[i-1] must = 1 unless a[i] == "Y" and a[i-1] == "s"
// "Y" must always be capitalised