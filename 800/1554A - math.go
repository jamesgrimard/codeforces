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
		list:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		largest:=0
		for j:=1;j<n;j++{
			if largest < int(list[j])*int(list[j-1]) {
				largest= int(list[j])*int(list[j-1])
			}
		}
		fmt.Fprintln(out,largest)
	}
}