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
		var start,end,key int
		if list[0] != 1 {
			key= 1
			start= 0
		} else {
			for j:=1;j<n;j++{
				if list[j-1]+1 != list[j]  {
					start = j
					key = list[j-1]+1
					break
				}
			}
		}
		for j:=1;j<n;j++{
			if list[j] == key {
				end=j
				break
			}
		}
		counter:=0
		for j:=start;j<(end-counter);j++{
			list[j],list[end-counter] = list[end-counter],list[j]
			counter++
		}
		for j:=0;j<len(list);j++{
			fmt.Fprintf(out,"%v ",list[j])
		}
		fmt.Fprintln(out,)
	}
}