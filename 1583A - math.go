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
		var n,sum int
		fmt.Fscan(in,&n)
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
			sum += a[j]
		}
		var xcld,yes int
		for isComposite(sum) == false {
			for k:=0;k<n;k++{
				sum -= a[k]
				if isComposite(sum) == true {
					xcld = k+1
					yes = 1
					break
				}
				sum += a[k]
			}
		}
		fmt.Fprintln(out,n-yes)
		for j:=1;j<=n;j++{
			if j == xcld {
				continue
			}
			fmt.Fprintf(out,"%v ",j)
		}
		fmt.Fprintln(out)
	}
}

func isComposite(a int) bool {
	for j:=2;j*j<=a;j++{
		if a % j == 0 && a != j {
			return true
		}
	}
	return false
}

// either the sum of n or n-1 digits will always be composite, given that n is >= 3
// check the total sum of n is composite, return n if so, else iterate over array and subtract each element
// then check if composite