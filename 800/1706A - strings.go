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
		var n,m int
		fmt.Fscan(in,&n,&m)
		row1:= make([]int,n)
		row2:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&row1[j])
			row2[j]=(m+1-row1[j])
		}
		word:= make([]string,m)
		for j:=0;j<m;j++{
			word[j]="B"
		}
		for j:=0;j<n;j++{
			if row1[j] <= row2[j] {
				if string(word[row1[j]-1]) == "B" {
					word[row1[j]-1] = "A"
					continue
				}
			}
			if string(word[row2[j]-1]) == "B" {
				word[row2[j]-1] = "A"
			} else {
				word[row1[j]-1] = "A"
			}
		}
		for j:=0;j<len(word);j++{
			fmt.Fprintf(out,"%v",string(word[j]))
		}
		fmt.Fprintln(out,)
	}
}

