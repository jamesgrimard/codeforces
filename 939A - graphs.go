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
	list:= make([]int,t)
	for j:=0;j<t;j++{
		fmt.Fscan(in,&list[j])
	}
	for j:=0;j<t;j++{
		if list[list[list[j]-1]-1] == j+1{
			fmt.Fprintln(out,"YES")
			goto out
		}
	}
	fmt.Fprintln(out,"NO")
	out:
}
