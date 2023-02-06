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
		mapper:= make(map[int]bool) // create a map
		for j:=n-1;j>=0;j--{ // loop through each element, starting from end
			if mapper[list[j]] { // if map coords exist, print j (position in the loop)
				fmt.Fprintln(out,j+1)
				goto out
			}
			mapper[list[j]]= true // if first time, add list[j] value to map index
			// [3 2 1 3]
			// mapper[3] = true
		}
		fmt.Fprintln(out,0)
		out:
	}
}
