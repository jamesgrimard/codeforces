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
	if t%4 == 1 || t%4 == 2{
		fmt.Fprintln(out,1)
	} else {
		fmt.Fprintln(out,0)
	}
}