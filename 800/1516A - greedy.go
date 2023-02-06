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
		var n,k int
		fmt.Fscan(in,&n,&k)
		list:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
		}
		count:=0
		for j:=0;j<k;j++{
			if list[count] == 0 {
				count++
				j--
			} else {
				list[count]--
				list[n-1]++
			}
			if count > n-2{
				break
			}
		}
		for j:=0;j<len(list);j++{
			fmt.Fprintf(out,"%v ",list[j])
		}
		fmt.Fprintln(out,)
	}
}