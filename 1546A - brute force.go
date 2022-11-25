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
		var n,as,bs int
		fmt.Fscan(in,&n)
		a:= make([]int,n)
		b:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
			as += a[j]
		}
		for j:=0;j<n;j++{
			fmt.Fscan(in,&b[j])
			bs += b[j]
		}
		if as != bs {
			fmt.Fprintln(out,-1)
			continue
		}
		var o []int
		for j:=0;j<n;j++{
			for a[j] > b[j] {
				a[j]--
				for k:=j+1;k<n;k++{
					if a[k] < b[k] {
						a[k]++
						o = append(o,j+1,k+1)
						break
					}
				}
			}
			for a[j] < b[j] {
				a[j]++
				for k:=j+1;k<n;k++{
					if a[k] > b[k] {
						a[k]--
						o = append(o,k+1,j+1)
						break
					}
				}
			}
		}
		fmt.Fprintln(out,len(o)/2)
		for j:=0;j<len(o);j+=2{
			fmt.Fprintln(out,o[j],o[j+1])
		}
	}
}

// given 2 arrays a,b find the co-ords i,j of every operation that ++ or -- so that there's parity between a,b
// create a for loop that iterates over the length of a, given that len(a) == len(b) 
// in that for loop create a nested loop for if a[j] > b[j] and a[j] < b[j]
// ++ and -- appropriately, append co-ords to an array, print len(coords array)/2