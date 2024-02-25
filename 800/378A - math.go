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
	var a,b int
	fmt.Fscan(in,&a,&b)
	if a==b{
		fmt.Fprintln(out,0,6,0)
	} else if a < b {
		if (b-a)%2 == 0 {
			fmt.Fprintln(out,a+(b-a-1)/2,1,(6-b+1)+(b-a-1)/2)
		} else {
			fmt.Fprintln(out,a+(b-a)/2,0,(6-b+1)+(b-a)/2)
		}
	} else {
		if (a-b)%2 == 0 {
			fmt.Fprintln(out,(6-a+1)+(a-b-1)/2,1,b+(a-b-1)/2)
		} else {
			fmt.Fprintln(out,(6-a+1)+(a-b)/2,0,b+(a-b)/2)
		}
	}
	
}