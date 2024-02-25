//package main
import( 
    "fmt"
    "sort"
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
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		if n < 3 {
			fmt.Println(-1)
			continue
		}
		sort.Ints(list)
		for k:=1;k<=n-2;k++{
			counter:=0
			for j:=0;j<3;j++ {
				if list[n-k] == list[n-k-j] {
					counter++
				}
				if counter == 3 {
					fmt.Println(list[n-k])
					goto out
				}
			}
		}
		fmt.Println(-1)
		out:
	}
}

