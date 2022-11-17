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
		var x,y int
		fmt.Fscan(in,&x,&y)
		if x >= y {
			for j:=0;j<y+x;j++{
				if y > 0 {
					fmt.Fprintf(out,"%v",1)
					y--
				}
				fmt.Fprintf(out,"%v",0)
			}
		} else {
			for j:=0;j<x+y;j++{
				if x > 0 {
					fmt.Fprintf(out,"%v",0)
					x--
				}
				fmt.Fprintf(out,"%v",1)
			}
		}
		
		fmt.Fprintln(out,)
	}
}
