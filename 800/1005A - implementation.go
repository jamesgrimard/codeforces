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
	var list []int
	counter:=0
	for j:=0;j<t;j++{
		var x int
		fmt.Fscan(in,&x)
		if x == 1 && j!=0{
			list = append(list,counter)
			counter=0
		}
		counter++
	}
	list=append(list,counter)
	fmt.Fprintln(out,len(list))
	for i:=0;i<len(list);i++{
		fmt.Fprintf(out,"%v ",list[i])
	}
}
