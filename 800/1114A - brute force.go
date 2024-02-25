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
	var p1,p2,p3 int
	fmt.Fscan(in,&p1,&p2,&p3)
	var x,y,z int
	fmt.Fscan(in,&x,&y,&z)
	total_requirement:= p1 + p2 + p3
	total_grapes:= x + y + z
	if total_requirement > total_grapes || p1 > x || p2 > x + y - p1 || p3 > total_grapes - p1 - p2 {
		fmt.Fprintln(out,"NO")
	} else {
		fmt.Fprintln(out,"YES")
	}
}

// first condition: total > total requirement
// second condition: green > p1 requirement
// third condition: purple + green - p1 requirement > p2 req
// fourth is that remainder after 2nd and 3rd condition is >  p3 req