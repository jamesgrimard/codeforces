//package main
import( 
    "fmt"
    "bufio"
    "os"
    "strings"
)
type coords struct{
	row int
	column int
}
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
		a:=strings.Count(word,"a")
		b:= strings.Count(word,"b")
		if a == 0 || b == 0 {
			fmt.Fprintln(out, -1,-1)
		} else {
			for j:=1;j<n;j++{
				if (string(word[j]) == "a" && string(word[j-1]) == "b") || (string(word[j]) == "b" && string(word[j-1]) == "a"){
					fmt.Fprintln(out,j,j+1)
					break
				} 
			}
		}
	}
}
