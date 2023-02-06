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
	a:= make([]int,100*t)
	for i:=1;i<=t;i++{
		var s,f int
		fmt.Fscan(in,&s,&f)
		for j:=s;j<=f;j++{
			a[j-1] = t-i+1
		}
	}
	var x int
	fmt.Fscan(in,&x)
	fmt.Fprintln(out,a[x-1])
}

// create an array of all pages
// iterate over array and set chapter refernce to each page