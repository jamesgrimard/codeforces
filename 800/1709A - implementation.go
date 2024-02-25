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
		var key int
		fmt.Fscan(in,&key)
		list:= make([]int,3)
		for j:=0;j<3;j++{
			fmt.Fscan(in,&list[j])
		}
		for j:=1;j<3;j++{
			if list[key-1] != key && list[key-1] != 0 {
				key= list[key-1]
			} else {
				fmt.Fprintln(out,"NO")
				goto out
			}
		}
		fmt.Fprintln(out,"YES")
		out:
	}
}