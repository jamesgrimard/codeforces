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
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		var m,sum int
		fmt.Fscan(in,&m)
		for j:=0;j<m;j++{
			var x int 
			fmt.Fscan(in,&x)
			sum += x
		}
		fmt.Fprintln(out,a[sum%n])
	}
}

// problem is posed as a deck of cards but for the sake of simplicity reframe problem to a set of n elements
// elements in the set are fixed to their initial indice
// iterate over this set 'sum' many times, sum = the sum of m inputs
// having the total sum, we can divide it by the length of set and use the remainder as the current index point