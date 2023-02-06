//package main
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	var t int
	var in = bufio.NewReader(os.Stdin)
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Fscan(in,&n)
		var list []int = make([]int,n)
		var smallest int = 999999999999
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
			if list[j] < smallest {
				smallest=list[j]
			}
		}
		counter:=0
		for j:=0;j<n;j++{
			counter+=list[j]-smallest
		}
		fmt.Println(counter)
	}
}