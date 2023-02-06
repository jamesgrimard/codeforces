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
		var n,sum,mx int
		fmt.Fscan(in,&n)
		for j:=0;j<n;j++{
			var x,y int
			fmt.Fscan(in,&x,&y)
			if x > y {
				x , y = y , x
			}
			sum += x
			if y > mx {
				mx = y
			}
		}
		fmt.Fprintln(out,mx*2+sum*2)
	}
}

// take the max input value and use that as the largest y axis
// sort all inputs so that y > x
// sum all the x elements
// return y*2 + x*2