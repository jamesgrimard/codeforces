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

		for j:=n;j>0;j--{
			for k:=1;k<=j;k++{
				fmt.Fprintf(out,"(")
			}
			for k:=1;k<=j;k++{
				fmt.Fprintf(out,")")
			}
			for k:=n;k>j;k--{
				fmt.Fprintf(out,"()")
			}
			fmt.Fprintln(out,)
		}
	}
}