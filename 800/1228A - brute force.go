//package main
import( 
    "fmt"
    "bufio"
    "os"
    "strconv"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var a,b int
	fmt.Fscan(in,&a,&b)
	for j:=a;j<=b;j++{
		mapper:= make(map[string]bool)
		x:= strconv.Itoa(j)
		for k:=0;k<len(x);k++{
			if mapper[string(x[k])] == true {
				break
			}
			mapper[string(x[k])]= true
			if k == len(x)-1 {
				fmt.Fprintln(out,x)
				goto out
			}
		}
	}
	fmt.Fprintln(out,-1)
	out:
}