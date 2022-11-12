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
		var y,x int
		fmt.Fscan(in,&y,&x)
		list:= make([]string,y)
		for j:=0;j<y;j++{
			fmt.Fscan(in,&list[j])
		}
		counter:=0
		holder:=0
		for j:=0;j<y;j++{
			for k:=holder;k<x;k++{
				if k == x-1 && string(list[j][k]) == "R" {
					counter++
					break
				}
				if j == y-1 && string(list[j][k]) == "D" {
					counter++
					continue
				}
			}
		}
		fmt.Fprintln(out,counter)
	}
}
