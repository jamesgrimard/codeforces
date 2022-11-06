//package main
import( 
    "fmt"
    "bufio"
    "os"
    "sort"
    "strings"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()	
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var word string
		fmt.Fscan(in,&word)
		list:= strings.Split(word,"")
		sort.Strings(list)
		for j:=0;j<len(list);j++{
			fmt.Fprintf(out,"%v",string(list[j]))
		}
		fmt.Fprintln(out,)
	}
}