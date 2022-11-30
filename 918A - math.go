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
	if t == 1 {
		fmt.Fprintln(out,"O")
	} else if t == 2 {
		fmt.Fprintln(out,"OO")
	} else {
		var a []int
		a = append(a,1,1,2,3)
		for j:=4;j<t;j++{
			a = append(a,a[j-2] + a[j-1])
		}
		for j:=1;j<=t;j++{
			for k:=0;k<len(a);k++{
				if j == a[k] {
					fmt.Fprintf(out,"O")
					goto out
				}
			}
			fmt.Fprintf(out,"o")
			out:
		}
	}
}

// need to append the first 4 fibonacci numbers to array, then for loop with a limit of t