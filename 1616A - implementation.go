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
		mapper:= make(map[int]int)
		for j:=0;j<n;j++{
			if mapper[abs(list[j])] >= 1 {
				mapper[abs(list[j])]++
				continue
			} 
			mapper[abs(list[j])]= 1
		}
		count:=0
		for i,j := range mapper{
			if j == 1 || i==0 {
				count++
				continue
			}
			count+=2
		}
		fmt.Fprintln(out,count)
	}
}

func abs(x int) int {
	if x < 0 {
		return x*-1
	}
	return x
}