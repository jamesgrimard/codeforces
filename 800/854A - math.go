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
	var t,a,b int
	fmt.Fscan(in,&t)
	if t & 1 == 1 {
		a = t/2
		b = t/2+1
	} else {
		a = t/2-1
		b = t/2+1
	}
	for GCD(a,b) != 1 {
		b++
		a--
	}
	fmt.Fprintln(out,a,b)
}
func GCD(a,b int) int {
	if a % b == 0 {
		return b
	}
	return GCD(b,a%b)
}

// starting points are different depending on whether t is odd or even/
// if odd a , b = t/2 , t/2 +1 else, a , b = t/2 -1 , t/2 +1
// use for loop to increment b and decrement a and condition stop on gcd(a,b) == 1