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
		var x,y int
		fmt.Fscan(in,&x,&y)
		var word string
		fmt.Fscan(in,&word)
		if y == 0 || x == 1 {
			fmt.Fprintln(out,1)
		} else {
			list:= strings.Split(word,"")
			for j,k:=0,len(list)-1;j<k;j,k=j+1,k-1{
				list[j],list[k] = list[k],list[j]
			}
			word2:= strings.Join(list,"")
			if word == word2 {
				fmt.Fprintln(out,1)
			} else {
				fmt.Fprintln(out,2)
			}
		}
	}
}