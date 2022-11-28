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
		var count int
		for j:=1;j<n;j++{
			if a[j] < a[j-1] {
				count++
				j++
			}
		}	
		fmt.Fprintln(out,count)
	}
}

// check if a[j] is smaller than previous element (a[j-1])
// if true, count++ and jump an element