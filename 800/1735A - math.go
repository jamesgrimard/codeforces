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
		var n int
		fmt.Fscan(in,&n)
		var a,b,c int
		a = 1
		if (n - 3) % 3 == 0 {
			b = (n - 3) / 3
		} else {
			b = (n - 3) / 3 * 2
		}
		c = n - 3 - (a + b)
		fmt.Fprintln(out,min(abs(a-b),abs(b-c),abs(a-c)))
	}
}
func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}

func min(a,b,c int) int {
	if a <= b && a <= c {
		return a
	} else if b <= a && b <= c {
		return b
	}
	return c
}

// basic concept of this problem is spacing elements on an array, we know 2 fixed positions 1 and n
// given that the problem requires us to spread the elements in a dissimilar fashion we can conclude
// a third fixed position, 2, therefore 1 0 ........... 0
// we need implement a zero inbetween n-3, therefore n-3 / 3 to get the size of a third and then times by 2
// there is a trick though for if n-3 / 3 is not a float, ie (n-3)%3 == 0, b then equals 
// n - 3 / 3 , else n - 3 / 3 * 2