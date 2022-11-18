//package main
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
		var a,b,c int
		fmt.Fscan(in,&a,&b,&c)
		fmt.Fprintln(out,max(a,b,c)+1)
	}
}
func max(a,b,c int) int {
	if a >= b && a >= c {
		return a
	}
	if b >= c && b >= a {
		return b
	}
	return c
}
