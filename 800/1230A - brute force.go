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
	list:= make([]int,4)
	sum:=0
	for i:=0;i<4;i++{
		fmt.Fscan(in,&list[i])
		sum+=list[i]
	}
	if sum%2 != 0 {
		fmt.Fprintln(out,"NO")
		goto out
	}
	for j:=0;j<4;j++{
		if list[j] == sum/2 {
			fmt.Fprintln(out,"YES")
			goto out
		}
	}
	for j:=0;j<4-1;j++{
		for k:=j+1;k<4;k++{
			if (list[j]+list[k]) == sum/2{
				fmt.Fprintln(out,"YES")
				goto out
			}
		}
	}
	fmt.Fprintln(out,"NO")
	out:
}