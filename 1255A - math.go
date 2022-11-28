package main
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
		var a,b,count int
		fmt.Fscan(in,&a,&b)
		count += (abs(a-b) / 5 )
		count += ((abs(a-b) % 5) / 2) 
		count += (((abs(a-b) % 5) % 2) / 1) 
		fmt.Fprintln(out,count)
	}
}

func abs(a int) int {
	if a < 0 {
		return a * - 1
	}
	return a
}