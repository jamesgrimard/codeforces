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
		count:= 0
		for j:=1;j<n-1;j++{
			if a[j] > a[j-1] && a[j] > a[j+1] {
				if j == n-2 {
					a[j] = max(a[j+1],a[j-1])
					count++
					continue
				}
				if a[j+1] < a[j+2] {
					a[j+1] = max(a[j],a[j+2])
					j++
				} else {
					a[j] = max(a[j+1],a[j-1])
				}
				count++
			}
		}
		fmt.Fprintln(out,count)
		for j:=0;j<n;j++{
			fmt.Fprintf(out,"%v ",a[j])
		}
		fmt.Fprintln(out)
	}	
}

func max(a,b int) int {
	if a >= b {
		return a
	}
	return b
}

// solve for highest peaks by checking preceding and succeeding elements;
// if a[j-1] && a[j+1] > a[j], then check for a[j+1], if a[j] && a[j+2] < a[j+1]
// then just change a[j+1] to the max of a[j] or a[j+2], else if a[j] && a[j+2] !< a[j+1],
// just change a[j] to max(a[j-1],a[j+1])
// add a special condition for element n-2 in array, just check current position else you will 
// get a range error