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
		var output string
		if n%3 == 1 {
			for j:=1;j<=n/3;j++{
				output+="12"
			}
			output+="1"
		} else {
			for j:=1;j<=n/3;j++{
				output+="21"
			}
			if n%3 == 2 {
				output+="2"
			}			
		}
		fmt.Fprintln(out,output)
	}
}
