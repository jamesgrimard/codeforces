//package main
import( 
    "fmt"
    "bufio"
    "os"
    "strconv"
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
		var binary string 
		fmt.Fscan(in,&binary)
		var list []int
		for j:=0;j<n;j++{
			s,_:= strconv.Atoi(string(binary[j]))
			list= append(list,s)
		}
		var output []int
		for j:=0;j<n;j++{
			if j==0{
				output= append(output,1)
				list[j]++
			} else {
				if list[j]+1 == list[j-1] {
					output= append(output,0)
				} else {
					output= append(output,1)
					list[j]++
				}
			}
		}
		for j:=0;j<n;j++{
			fmt.Fprintf(out,"%v",output[j])
		}
		fmt.Fprintln(out,)
	}
}
