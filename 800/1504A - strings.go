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
		var word string
		fmt.Fscan(in,&word)
		word1:="a"+word
		for j:=0;j<len(word1);j++{
			if string(word1[j]) != string(word1[len(word1)-1-j]) {
				fmt.Fprintln(out,"YES")
				fmt.Fprintln(out,word1)
				goto out
			}
		}
		word= word+"a"
		for j:=0;j<len(word);j++{
			if string(word[j]) != string(word[len(word)-1-j]) {
				fmt.Fprintln(out,"YES")
				fmt.Fprintln(out,word)
				goto out
			}
		}
		fmt.Fprintln(out,"NO")
		out:
	}
}