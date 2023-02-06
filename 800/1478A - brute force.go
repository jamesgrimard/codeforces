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
		var n int
		fmt.Fscan(in,&n)
		counter:=0
		mode:=0
		recent:=0
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if j == 0 {
				recent=x
				counter++
			} else {
				if x == recent {
					counter++
				} else {
					if counter > mode {
						mode = counter
					}
					counter=1
					recent= x
				}
			}
		}
		fmt.Fprintln(out,max(mode,counter))
	}
}
func max(a,b int) int {
	if a >= b {
		return a
	}
	return b
}