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
		var smallest int
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
			if j == 0 {
				smallest = list[j]
			} else {
				if list[j] < smallest {
					smallest= list[j]
				}
			}
		}
		var counter int
		for j:=0;j<n;j++{
			if list[j] > smallest {
				counter++
			}
		}
		fmt.Fprintln(out,counter)
	}
}
