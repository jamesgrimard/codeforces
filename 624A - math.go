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
	var width,length,v1,v2 int
	fmt.Fscan(in,&width,&length,&v1,&v2)
	length -= width
	v1 += v2
	fmt.Fprintln(out,float64(length)/float64(v1))
}