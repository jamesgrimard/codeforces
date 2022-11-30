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
		var xax,yax []int 
		for j:=0;j<3;j++{
			var x,y int
			fmt.Fscan(in,&x,&y)
			xax = append(xax,x)
			yax = append(yax,y)
		}
		if yax[0] == yax[1] && yax[0] != 0 && yax[0] > yax[2] {
			fmt.Fprintln(out,abs(xax[0]-xax[1]))
		} else if yax[0] == yax[2] && yax[0] != 0 && yax[0] > yax[1] {
			fmt.Fprintln(out,abs(xax[2]-xax[0]))
		} else if yax[1] == yax[2] && yax[1] != 0 && yax[1] > yax[0] {
			fmt.Fprintln(out,abs(xax[2]-xax[1]))
		} else {
			fmt.Fprintln(out,0)
		}
	}
}

func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}

// triangle has unreacable points if 2 of the 3 y-coords are equal, and they are > the third ycord
// return distance between respective x's to get length of triangle ceiling