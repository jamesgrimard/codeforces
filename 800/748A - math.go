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
	var x,y,d int
	fmt.Fscan(in,&x,&y,&d)
	var s string
	y *= 2
	if d & 1 == 1 {
		d++
		s += "L"
	} else {
		s += "R"
	}
	c:= d / y
	if d % y != 0 {
		c++
	}
	r := (d % y) / 2
	if r == 0 {
		r = y/2
	}
	
	fmt.Fprintln(out,c,r,s)
}

// all odds on left side 
// x,y format 
// if d % y*2 != 0, x*2 + 1 (ceiling) 