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
		var n int
		fmt.Fscan(in,&n)
		list:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		if n < 2 {
			fmt.Fprintln(out,0)
			continue
		}
		var difference []int
		for j:=0;j<n;j++{
			for k:=j+1;k<n;k++{
				difference= append(difference, list[k]-list[j])
			}
		}
		for j:=0;j<len(difference);j++{
			for k:=j+1;k<len(difference);k++{
				if difference[j] == difference[k] {
					difference= append(difference[:k],difference[k+1:]...)
					k--
				}
			}
		}
		fmt.Fprintln(out,len(difference))
	}
}
