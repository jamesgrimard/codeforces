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
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n,m int
		fmt.Fscan(in,&n,&m)
		a:= make([]string,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		var r,c int
		var v,vo string
		for j:=0;j<n;j++{
			for k:=0;k<m;k++{
				if string(a[j][k]) != "." && v == "" {
					v = string(a[j][k])
					r = j & 1
					c = k & 1
					goto out
				}
			}
		}
		v, r , c = "W" , 0 , 0
		out:
		if v == "W" {
			vo = "R"
		} else {
			vo = "W"
		}
		var list []string
		for j:=0;j<n;j++{
			var s strings.Builder
			for k:=0;k<m;k++{
				if j & 1 == r & 1 {
					if k & 1 == c & 1 {
						s.WriteString(v)
					} else {
						s.WriteString(vo)
					}
				} else {
					if k & 1 == c & 1 {
						s.WriteString(vo)
					} else {
						s.WriteString(v)
					}
				}
			}
			list = append(list,s.String())
		}
		for j:=0;j<n;j++{
			for k:=0;k<m;k++{
				if string(list[j][k]) != string(a[j][k]) && string(a[j][k]) != "." {
					fmt.Fprintln(out,"NO")
					goto out2
				}
			}
		}
		fmt.Fprintln(out,"YES")
		for j:=0;j<n;j++{
			fmt.Fprintln(out,list[j])
		}
		out2:
	}
}


// take inputs into an a string array
// iterate over rows and columns to find first "R" || "W", if none, assign one anyway
// create a nested loop and build a new string with the same odds, evens row,column layout as the intial
// compare strings, if different, return no, else return yes and print strings