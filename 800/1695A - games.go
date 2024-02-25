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
		var y,x,max,r,c int
		fmt.Fscan(in,&y,&x)
		for j:=1;j<=y;j++{
			for k:=1;k<=x;k++{
				var tmp int
				fmt.Fscan(in,&tmp)
				if tmp > max || (j==1 && k==1){
					max = tmp
					r,c = j,k
				}
			}
		}
		a:= max1(abs(r-y)+1,abs(r-1)+1)
		b:= max1(abs(c-x)+1,abs(c-1)+1)
		fmt.Fprintln(out,a*b)
	}
}

func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}

func max1(a,b int) int {
	if a >= b {
		return a
	}
	return b
}

// solution requires you to take the coords of the max element and find the distance to the furthest corner.
// ie : aa * * ca
//  	*  * *  *
//		* xy *  *
//		ad * * dd

// furthest distance from xy coord is ca
// max(|h-y(xy)|,|y(xy)-1| find the furthest height
// .. then the same for finding the furthest width
// multiply to find area of rectangle
// 3 * 3 == 9