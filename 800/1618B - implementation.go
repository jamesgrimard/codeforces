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
		list:= make([]string,n-2)
		for j:=0;j<n-2;j++{
			fmt.Fscan(in,&list[j])
		}
		var output string
		if len(list) == 1 {
			fmt.Fprintln(out,string(list[0])+"b")
			continue
		}
		count:=len(list)*2-n
		output+= string(list[0])
		for j:=1;j<len(list);j++{
			if string(list[j-1][1]) == string(list[j][0]) && count > 0{
				count--
				output+= string(list[j][1])
				continue
			}
			output+= list[j]
		}
		fmt.Fprintln(out,output)
	}
}