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
	var n int
	fmt.Fscan(in,&n)
	list:= make([]int,n)
	for j:=0;j<n;j++{
		fmt.Fscan(in,&list[j])
	}
	var x,y,smallest int
	for j:=0;j<n-1;j++{
		if j==0{
			smallest= abs(list[j]-list[n-1])
			x,y= n-1,j
		}
		if abs(list[j]-list[j+1]) < smallest {
			smallest= abs(list[j]-list[j+1])
			x,y = j,j+1
		}
	}
	fmt.Fprintln(out,x+1,y+1)
}
func abs(x int) int{
	if x < 0 {
		return x*-1
	}
	return x
}