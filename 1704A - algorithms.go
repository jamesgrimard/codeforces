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
		var n,m int
		fmt.Fscan(in,&n,&m)
		var a,b string
		fmt.Fscan(in,&a,&b)
		for j:=m-1;j>=0;j--{
			if a[(n-m)+j] == b[j] {
				continue
			}
			for k:=0;k<j+(n-m);k++{
				if a[k] == b[j] {
					if j == 0 {
						fmt.Fprintln(out,"YES")
						goto out
					} else {
						fmt.Fprintln(out,"NO")
						goto out
					}
				}
			}
			fmt.Fprintln(out,"NO")
			goto out
		}
		fmt.Fprintln(out,"YES")
		out:
	}
}

// given 2 binary strings, iterate from reverse
// compare each element, if a[i] != b[i], search through the rest of array a, if you don't find, return NO
// if you do find and j is the last element of array b, return YES, else return NO
// ie 	  1 0 1 1 1
// 	    	1 0 1 1
// 2nd element a[2],b[2] does not match (0,1)
// since i == 2 and not 1 (ie, not the last element of array b) return NO