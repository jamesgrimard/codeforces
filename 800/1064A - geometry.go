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
	list:= make([]int,3)
	for j:=0;j<3;j++{
		fmt.Fscan(in,&list[j])
	}
	for j:=1;j<3;j++{
		if list[j] < list[j-1] {
			list[j],list[j-1] = list[j-1],list[j]
			j-=2
			if j<0{
				j=0
			}
		}
	}
	if list[2] - (list[1]+list[0]) >= 0 {
		fmt.Fprintln(out,(list[2] - (list[0]+list[1]))+1)
	} else {
		fmt.Fprintln(out,0)
	}
}
