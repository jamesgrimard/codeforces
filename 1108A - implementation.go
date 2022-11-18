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
		var l1,r1,l2,r2 int
		fmt.Fscan(in,&l1,&r1,&l2,&r2)
		if l1 == r2 {
			fmt.Fprintln(out,r1,r2)
			continue
		}
		fmt.Fprintln(out,l1,r2)
	}
}