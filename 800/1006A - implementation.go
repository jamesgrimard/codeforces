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
	list:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&list[i])
		if list[i]%2 == 0 {
			fmt.Fprintf(out,"%v ",list[i]-1)
		} else {
			fmt.Fprintf(out,"%v ",list[i])
		}	
	}
}