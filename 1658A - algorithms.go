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
		var n int
		fmt.Fscan(in,&n)
		var word string
		fmt.Fscan(in,&word)
		var sum int
		for j:=0;j<n-1;j++{
			if string(word[j]) == "0" {
				count:=2
				for k:=j+1;k<n;k++{
					if string(word[k]) == "1" {
						count--
					}
					if string(word[k]) == "0" || count == 0 {
						sum+=count
						break
					}
				}
			}
		}
		fmt.Fprintln(out,sum)
	}
}