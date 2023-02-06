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
		for j:=1;j<1000;j++{
			if n == 1 {
				fmt.Fprintln(out,j-1)
				break
			}
			if n%2 == 0 {
				n/=2
				continue
			}
			if n%3 == 0 {
				n= 2*n/3
				continue
			}
			if n%5 == 0 {
				n= 4*n/5
				continue
			}
			fmt.Fprintln(out,-1)
			break
		}
	}	
}