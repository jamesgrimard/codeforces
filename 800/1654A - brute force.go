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
		var min,max int
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
			if a[j] > max {
				min = max
				max = a[j]
				continue
			}
			if a[j] > min && a[j] <= max {
				min = a[j]
			}
		}
		fmt.Fprintln(out,min+max)
	}
}

// due to time and memory constraints, stay away from iterating over arrays.
// diven that we need to find only largest and 2nd largest we can check each input against max
// and set it to the max and move the previous max to the min, if it is larger.
// else if the input is less than the max and > than the min, just update the min.