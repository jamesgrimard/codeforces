//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
    "math"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var x int
		fmt.Fscan(in,&x)
		if x == 1 {
			fmt.Fprintln(out,3)
		} else if x & 1 == 1 {
			fmt.Fprintln(out,1)
		} else if isIntegral(math.Log2(float64(x))) == true {
			fmt.Fprintln(out,x+1)
		} else {
			j:= 1 
			for j <= x / 2 {
				j <<= 1
				if x & j > 0 {
					fmt.Fprintln(out,j)
					break
				}
			}
		}
	}
}
func isIntegral(x float64) bool {
	return float64(int(x)) == x
}

// we're given x and need to find y such that, x&y > 1 , x^y > 1
// special case is x == 1, condisder 1 is a bit that isnt divisible by 2, therefore if 1, return 3
// else if x is odd we can conclude that the condition x & 1 == 1, therefore return 1
// if x is even, we need to check if y^2 divides into x evenly, if so x is considered to be 2,4,8,16 or 32 ......
// we need to find the first base 2 and return x + 1
// else if x isn't base 2 just keep shifting binary left << to find first binary 