//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
)
type Pair struct {
	school int
	dmg int
}
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var x,y,k,sum int
	fmt.Fscan(in,&x,&y,&k)
	for j:=0;j<k;j++{
		sum += ((x*2+y*2)-4)
		x , y = x - 4 , y - 4 
	}
	fmt.Fprintln(out,sum)
}