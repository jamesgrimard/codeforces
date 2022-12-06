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
		fmt.Fscan(in,&n)
		var a,b,c []int
		for j:=0;j<3;j++{
			for k:=0;k<n;k++{
				var x int
				fmt.Fscan(in,&x)
				if j == 0 {
					a = append(a,x)
				} else if j == 1 {
					b = append(b,x)
				} else {
					c = append(c,x)
				}
			}
		}
		var o []int
		o = append(o,a[0])
		for j:=1;j<n;j++{
			if a[j] == o[j-1] && j != n-1{
				o = append(o,b[j])
				continue
			}
			if j == n-1 {
				if a[j] != o[j-1] && a[j] != o[0] {
					o = append(o,a[j])
				} else if b[j] != o[j-1] && b[j] != o[0] {
					o = append(o,b[j])
				} else {
					o = append(o,c[j])
				}
				continue
			}
			o = append(o,a[j])
		}
		for j:=0;j<n;j++{
			fmt.Fprintf(out,"%v ",o[j])
		}
		fmt.Fprintln(out)
	}
}

// append all inputs into separate arrays a,b,c
// iterate through 1 -> n, append element to new list if != list[i-1] && if i = n - 1 check list[0] & list[i-1]
// print new array list