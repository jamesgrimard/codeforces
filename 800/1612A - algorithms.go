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
		var x,y int
		fmt.Fscan(in,&x,&y)
		if (x + y) % 2 == 0 {
			if x >= y {
				fmt.Fprintln(out,(x+y)/2,0)
			} else {
				fmt.Fprintln(out,0,(x+y)/2)
			}
		} else {
			fmt.Fprintln(out,-1,-1)
		}
	}
}

// d(ab)/2 == d(ac)
// therefore we can conclude a distribution that looks like this
// | C x x x x B
// | x C x x x x
// | x x C x x x
// | x x x C x x 
// A - - - - C -
// A: (0,0) B: (6,4)
// C: is = d(ac), d(cb) = 5 ie: (1,4),(2,3),(3,2),(4,1),(5,0) 

// (0,5) doesn't work because d(ac) == 5 but d(bc) == 6