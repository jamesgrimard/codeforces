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
		var x string
		fmt.Fscan(in,&x)
		counter:=0
		for j:=0;j<len(x);j++{
			if string(x[j]) == "1" {
				tally:=0
				for k:=j+1;k<len(x);k++{
					if string(x[k]) == "0" {
						tally++
					} else {
						counter+=tally
						break
					}
				}
			}
		}
		fmt.Fprintln(out,counter)
	}
}