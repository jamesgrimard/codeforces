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
	var t int
	fmt.Fscan(in,&t)
	fmt.Fprintln(out,t/2+1)	
}


// 7 - 1
// 3,3,1 - 2
// 2,2,2,1 - 3
// 1,1,1,1,1,1,1 - 4

// 6 - 1
// 3,3 - 2
// 2,2,2 - 3
// 1,1,1,1,1,1 - 4