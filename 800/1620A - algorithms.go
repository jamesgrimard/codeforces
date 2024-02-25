//package main
// github.com/jamesgrimard/codeforces
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
		var word string
		fmt.Fscan(in,&word)
		var count int
		for j:=0;j<len(word);j++{
			if string(word[j]) == "N" {
				count++
			}
		}
		if count == 1 {
			fmt.Fprintln(out,"NO")
		} else {
			fmt.Fprintln(out,"YES")
		}
	}
}