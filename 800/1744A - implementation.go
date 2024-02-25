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
		var n int
		fmt.Fscan(in,&n)
		list:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		var word string
		fmt.Fscan(in,&word)
		for j:=0;j<n;j++{
			for k:=j+1;k<n;k++{
				if list[j] == list[k] {
					if string(word[k]) != string(word[j]) {
						fmt.Fprintln(out,"NO")
						goto out
					}
				}
			}
		}
		fmt.Fprintln(out,"YES")
		out:
	}
}