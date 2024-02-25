//package main
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	
	for i:=0;i<t;i++{ // take inputs
		list:= make([]int,5)
		for j:=0;j<5;j++{
			fmt.Fscan(in,&list[j])
		}
		if list[3] <= list[0] && list[4] <= list[1] { // check if already surplus
			fmt.Fprintln(out,"YES")
		} else {
			if (list[3]-list[0]) < 0 { // check if deficit
				list[2]-= 0
			} else {
				list[2]-= (list[3]-list[0]) // deduct from universal
			}
			if list[2] >= 0 { // check if deficit
				if list[4]-list[1] > list[2] { // if cat food exceeds reserve
					fmt.Fprintln(out,"NO")
				} else {
					fmt.Fprintln(out,"YES")
				}
			} else {
				fmt.Fprintln(out,"NO")
			}
		}
	}
}