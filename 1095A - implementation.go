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
	var word string
	fmt.Fscan(in,&word)
	for i:=1;i<=t;i++{
		if (i*i+i)/2 <= t {
			fmt.Fprintf(out,"%v",string(word[((i*i+i)/2)-1]))
		} else {
			break
		}
	}
}
