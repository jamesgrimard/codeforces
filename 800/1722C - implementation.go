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
		mapper:= make(map[string]int)
		var list [][]string
		for j:=0;j<3;j++{
			innerlist:= make([]string,n)
			for k:=0;k<n;k++{
				fmt.Fscan(in,&innerlist[k])
				if mapper[string(innerlist[k])] >= 1 {
					mapper[string(innerlist[k])]+=1
					continue
				}
				mapper[string(innerlist[k])] = 1
			}
			list = append(list,innerlist)
		}
		var output []int
		for j:=0;j<3;j++{
			for k:=0;k<n;k++{
				if mapper[string(list[j][k])] == 3 {
					output = append(output, 0)
				} else if mapper[string(list[j][k])] == 2 {
					output = append(output, 1)
				} else if mapper[string(list[j][k])] == 1 {
					output = append(output, 3)
				}
			}
		}
		tally:=0
		for j:=0;j<len(output);j++{
			tally+=output[j]
			if (j+1)%n == 0 {
				fmt.Fprintf(out,"%v ",tally)
				tally=0
			}
		}
		fmt.Fprintln(out,)
	}
}