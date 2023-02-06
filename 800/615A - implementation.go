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
	var t,m int
	fmt.Fscan(in,&t,&m)
	a:= make([]int,m)
	for i:=0;i<t;i++{
		var n int 
		fmt.Fscan(in,&n)
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			a[x-1] = 1
		}
	}
	for j:=0;j<len(a);j++{
		if a[j] == 0 {
			fmt.Fprintln(out,"NO")
			goto out
		}
	}
	fmt.Fprintln(out,"YES")
	out:
}

// make fixed size array length m
// scan inputs and set a[i] to 1 
// scan array for any 0's
// return yes if no 0's