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
	list:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&list[i])
	}
	mapper:= make(map[int]bool)
	var output []int
	for j:=t-1;j>=0;j--{
		if mapper[list[j]] == true {
			continue
		}
		mapper[list[j]] = true
		output = append(output[:0],append([]int{list[j]},output[0:]...)...)
	}
	fmt.Fprintln(out,len(output))
	for i:=0;i<len(output);i++{
		fmt.Fprintf(out,"%v ",output[i])
	}
}

