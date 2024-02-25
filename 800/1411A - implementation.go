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
		list:= make([]string,n)
		for j:=0;j<n;j++{
			list[j]= string(word[j])
		}
		var tally int
		for j:=n-1;j>=0;j--{
			if string(list[j]) == ")" {
				tally++
			} else {
				break
			}
		}
		if tally > len(word)/2 {
			fmt.Fprintln(out,"Yes")
		} else {
			fmt.Fprintln(out,"No")
		}
	}
}
