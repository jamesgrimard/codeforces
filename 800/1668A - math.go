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
		var y,x int
		fmt.Fscan(in,&y,&x)
		if (y == 1 || x == 1) && (x > 2 || y > 2) {
			fmt.Fprintln(out,-1)
			continue
		}
		y -= 1
		x -= 1
		if (y & 1 == 0 && x & 1 == 0) || (x & 1 == 1 && y & 1 == 1) {
			fmt.Fprintln(out,max(y,x)*2)
		} else {
			fmt.Fprintln(out,max(y,x)*2-1)
		}
	}
}

func max(a,b int) int {
	if a >= b {
		return a
	}
	return b
}

// given that we start at coords 1,1 - subtract 1 from each coord
// x -= 1, y -= 1
// if both x,y are like, ie; odd,odd or even,even
// then it will require you to move double the max distance, ie 3,5 = 5*2, return max(x,y)*2
// else if odd,even or even,odd return max(x,y)*2 - 1, because you can get to the coord in 1 less step