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
		var n,sum int
		fmt.Fscan(in,&n)
		var list []int = make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
			sum+=list[j]
		}
		if n == 1 {
			fmt.Println(0)
		} else if sum%n != 0 {
			fmt.Println(-1)
		} else {
			count:=0
			for j:=0;j<n;j++{
				if list[j] > sum/n {
					count++
				}
			}
			fmt.Println(count)
		}
	}
}
