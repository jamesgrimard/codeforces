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
		var n,c int
		fmt.Fscan(in,&n,&c)
		list:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		mapper:= make(map[int]int)
		for j:=0;j<n;j++{
			mapper[list[j]]++
		}
		var sum int
		for _,value := range mapper {
			if value < c {
				sum+=value
			} else {
				sum+=c
			}
		}
		fmt.Fprintln(out,sum)
	}
}
