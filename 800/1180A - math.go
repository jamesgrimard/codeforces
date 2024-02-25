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
	holder:=1
	for j:=2;j<=t;j++{
		holder+= ((j-1)*4)
	}
	fmt.Fprintln(out,holder)
}
