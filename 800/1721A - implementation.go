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
		var a,b string
		fmt.Fscan(in,&a,&b)
		a+=b
		pairs:=0
		mapper:= make(map[string]bool)
		for j:=0;j<4;j++{
			if mapper[string(a[j])] == true {
				pairs++
				continue
			}
			mapper[string(a[j])]= true
		}
		if pairs == 3 {
			fmt.Fprintln(out,0)
		} else if pairs == 2 {
			fmt.Fprintln(out,1)
		} else if pairs == 1 {
			fmt.Fprintln(out,2)
		} else {
			fmt.Fprintln(out,3)
		}
	}
}
