//package main
import( 
    "fmt"
    "bufio"
    "os"
    "strconv"
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
		if len(word) == 2 {
			fmt.Fprintln(out,string(word[1]))
		} else {
			smallest:=0
			for j:=0;j<len(word);j++{
				x,_:= strconv.Atoi(string(word[j]))
				if j==0{
					smallest=x
				} else {
					if x <= smallest {
						smallest=x
					}
				}
			}
			fmt.Fprintln(out,smallest)
		}
	}
}
