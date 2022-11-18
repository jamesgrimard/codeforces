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
		list_x:= make([]int,n)
		list_y:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list_x[j],&list_y[j])
		}
		for j:=1;j<n;j++{
			if list_x[j] < list_x[j-1] {
				list_x[j],list_x[j-1]= list_x[j-1],list_x[j]
				j-=2
				if j<0{
					j=0
				}
			}
		}
		for j:=1;j<n;j++ {
			if list_y[j] < list_y[j-1] {
				list_y[j],list_y[j-1]= list_y[j-1],list_y[j]
				j-=2
				if j<0{
					j=0
				}
			}
		}
		sum:=0
		if list_x[n-1] > 0 {
			sum+= (list_x[n-1]*2)
		}
		if list_x[0] < 0 {
			sum+= ((list_x[0]*-1)*2)
		}
		if list_y[n-1] > 0 {
			sum+= (list_y[n-1]*2)
		}
		if list_y[0] < 0 {
			sum+= ((list_y[0]*-1)*2)
		}
		fmt.Fprintln(out,sum)
	}
}
