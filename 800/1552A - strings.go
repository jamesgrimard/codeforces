//package main
import( 
    "fmt"
    "bufio"
    "os"
    "strings"
    "sort"
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
		var word string
		fmt.Fscan(in,&word)
		list:= strings.Split(word,"")
		sort.Strings(list)
		counter:=0
		for j:=0;j<n;j++{
			if list[j] != string(word[j]) {
				counter++
			}
		}
		fmt.Fprintln(out,counter)
	}
}
