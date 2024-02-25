//package main
import( 
    "fmt"
    "bufio"
    "os"
    "sort"
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
		var list []int
		tally:=0
		for j:=0;j<len(word);j++{
			if string(word[j]) == "1" {
				tally++
				if j == len(word)-1 {
					list= append(list,tally)
				}
			} else {
				if tally != 0 {
					list= append(list,tally)
				}
				tally=0
			}
		}
		sort.Ints(list)
		counter:=0
		for j:=len(list)-1;j>=0;j-=2{
			counter+=list[j]
		}
		fmt.Fprintln(out,counter)
	}
}
