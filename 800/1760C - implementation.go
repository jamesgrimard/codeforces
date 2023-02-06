//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
    "sort"
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
		a2:= make([]int,len(a))
		copy(a2[:],a)
		sort.Ints(a2)
		for j:=0;j<n;j++{
			if a[j] == a2[n-1] {
				fmt.Fprintf(out,"%v ",a[j]-a2[n-2])
				continue
			}	
			fmt.Fprintf(out,"%v ",a[j]-a2[n-1])
		}
		fmt.Fprintln(out)
	}
}

// find largest and second largest value in array.
// subtract largest from every element except itself,
// if element == largest, subtract second largest
// return new set of updated integers