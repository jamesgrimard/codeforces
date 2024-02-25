//package main
import( 
    "fmt"
    "bufio"
    "os"
    "strconv"
    "strings"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var x int
		fmt.Fscan(in,&x)
		if x%2050 != 0 {
			fmt.Fprintln(out,-1)
		} else {
			word:= strconv.Itoa(x/2050)
			list:= strings.Split(word,"")
			total:=0
			for j:=0;j<len(list);j++{
				var v,_ = strconv.Atoi(list[j])
				total+=v
			}
			fmt.Fprintln(out,total)
		}
	}
}
