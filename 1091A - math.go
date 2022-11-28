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
	var a,b,c int
	fmt.Fscan(in,&a,&b,&c)
	if a <= b-1 && a <= c-2 {
		fmt.Fprintln(out,a+(a+1)+(a+2))
	} else if b-1 <= a && b-1 <= c-2 {
		fmt.Fprintln(out,(b-1)+b+(b+1))
	} else {
		fmt.Fprintln(out,(c-2)+(c-1)+c)
	}
}



// y = y
// b = y + 1
// r = y + 2