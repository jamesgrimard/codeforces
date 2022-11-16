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
		var row1,row2 int
		fmt.Fscan(in,&row1,&row2)
		mapper:= make(map[int]bool)
		for j:=0;j<row1;j++{
			var x int
			fmt.Fscan(in,&x)
			mapper[x] = true
		}
		count:=0
		for j:=0;j<row2;j++{
			var x int
			fmt.Fscan(in,&x)
			if mapper[x] == true {
				count++
			}
		}
		fmt.Fprintln(out,count)
	}
}

