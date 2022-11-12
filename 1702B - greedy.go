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
		var days int
		for j:=0;j<len(word);j++{
			days++
			mapper:= make(map[string]bool)
			counter:=0
			for k:=j;k<len(word);k++{
				if mapper[string(word[k])] == true {
					continue
				}
				mapper[string(word[k])] = true
				counter++
				if counter > 3 {
					j=(k-1)
					goto out
				}
			}
			break
			out:
		}
		fmt.Fprintln(out,days)
	}
}