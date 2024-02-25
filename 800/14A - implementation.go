//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
)
func main() {
	var in = bufio.NewReader(os.Stdin)
	var out = bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var y,x int
	fmt.Fscan(in,&y,&x)
	a:= make([]string,y)
	for i:=0;i<y;i++{
		fmt.Fscan(in,&a[i])
	}
	var top,left,right,bottom int = 50,50,0,0
	for j:=0;j<y;j++{
		for k:=0;k<x;k++{
			if string(a[j][k]) == "*" {
				if j < top {
					top = j
				}
				if j > bottom {
					bottom = j
				}
				if k < left {
					left = k
				}
				if k > right {
					right = k
				}
			}
		}
	}
	for j:=top;j<=bottom;j++{
		for k:=left;k<=right;k++{
			fmt.Fprintf(out,"%v",string(a[j][k]))
		}
		fmt.Fprintln(out)
	}
}

// iterate through the string inputs and record the top left, top right, bottom left, bottom right
// coords
// loop print with ranges of coords in for loops