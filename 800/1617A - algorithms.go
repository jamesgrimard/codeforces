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
	var n int
	fmt.Fscan(in,&n)
	for i:=0;i<n;i++{
		var s,t string
		fmt.Fscan(in,&s,&t)
		var a [][]byte = make([][]byte,4)
		for j:=0;j<len(s);j++{
			if s[j] == 97 {
				a[0] = append(a[0],97)
			} else if s[j] == 98 {
				a[1] = append(a[1],98)
			} else if s[j] == 99 {
				a[2] = append(a[2],99)
			} else {
				a[3] = append(a[3],s[j])
			}
		}
		for j:=1;j<len(a[3]);j++{
			if a[3][j] < a[3][j-1] {
				a[3][j] , a[3][j-1] = a[3][j-1] , a[3][j]
				j-=2
				if j < 0 {
					j = 0
				}
			}
		}
		if len(a[0]) > 0 && len(a[1]) > 0 && len(a[2]) > 0 && t == "abc" {
			a[1] , a[2] = a[2] , a[1]
		}
		for j:=0;j<len(a);j++{
			fmt.Fprintf(out,"%v",string(a[j]))
		}
		fmt.Fprintln(out)
	}
}

// you are required to take the input string s, and reproduce the smallest lexicographical string
// that is a permutation of s and does not have any subsequence of T
// iterate over the string, append a'b'c's to separate slices, other letters can go into the 4th slice
// sort the 4th slice
// swap a[1] & a[2] (b,c's) if required 