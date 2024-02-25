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
		var d,c int
		fmt.Fscan(in,&d,&c)
		if d == 0 && c == 0 {
			fmt.Fprintln(out,0)
		} else if abs(d-c) == 0 {
			fmt.Fprintln(out,1)
		} else if abs(d-c) & 1 == 1 {
			fmt.Fprintln(out,-1)
		} else {
			fmt.Fprintln(out,2)
		}
	}
}

func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}

// find the difference between the two inputs
// if the difference is odd ie, 1,3,5,7... then return -1 because all actions require equal or equal opposite actions
// given that the difference is even it is also divisble by 2. any 2 numbers can be arrived at in 2 operations