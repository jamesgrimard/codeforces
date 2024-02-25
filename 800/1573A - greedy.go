package main
//import( 
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
		var n int
		fmt.Fscan(in,&n)
		var word string
		fmt.Fscan(in,&word)
		list:= make([]int,n)
		tally:=0
		if string(word[n-1]) == "0" {
			tally=0
		} else {
			tally=-1
		}
		for j:=0;j<n;j++{
			x,_:=strconv.Atoi(string(word[j]))
			if x == 0 {
				x=10
			}
			list[j]=x
			if x != 10 {
				tally+=(x+1)
			}
		}
		fmt.Fprintln(out,tally)
	}
}
