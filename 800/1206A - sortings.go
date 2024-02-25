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
	largest:=0
	for i:=0;i<n;i++{
		var x int
		fmt.Fscan(in,&x)
		if x >= largest || i==0{
			largest = x
		}
	}
	largest_2:=0
	var m int
	fmt.Fscan(in,&m)
	for i:=0;i<m;i++{
		var x int
		fmt.Fscan(in,&x)
		if x >=largest_2 || i == 0 {
			largest_2 = x
		}
	}
	fmt.Fprintln(out,largest,largest_2)
}
