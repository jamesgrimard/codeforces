//package main
import( 
    "fmt"
    "bufio"
    "os"
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
		for j:=0;j<len(list);j+=2{
			if string(list[j]) == "a" {
				list[j]= "b"
			} else {
				list[j]= "a"
			}
		}
		for j:=1;j<len(list);j+=2{
			if string(list[j]) == "z" {
				list[j]= "y"
			} else {
				list[j]= "z"
			}
		}
		for j:=0;j<len(list);j++{
			fmt.Fprintf(out,"%v",list[j])
		}
		fmt.Fprintln(out,)
	}
}
