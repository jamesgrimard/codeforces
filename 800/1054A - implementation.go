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
	var x,y,z,t1,t2,t3 int
	fmt.Fscan(in,&x,&y,&z,&t1,&t2,&t3)
	t3 *= 3
	dz:= abs(x-z)
	dy:= abs(x-y)
	if t1 * dy >= t2 * dy + t3 + dz * t2 {
		fmt.Fprintln(out,"YES")
	} else {
		fmt.Fprintln(out,"NO")
	}
}
func abs(a int) int {
	if a<0{
		return a*-1
	}
	return a
}
