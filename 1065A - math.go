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
		var dollars,a,b,cost int 
		fmt.Fscan(in,&dollars,&a,&b,&cost)
		total:= dollars/cost
		free:= total / a * b
		fmt.Fprintln(out,total+free)
	}
}