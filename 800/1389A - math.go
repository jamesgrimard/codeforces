//package main
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	var t int
	var in = bufio.NewReader(os.Stdin)
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++ {
		var x,y int
		fmt.Fscan(in,&x,&y)
		if x*2 > y {
			fmt.Println(-1,-1)
		} else {
			fmt.Println(x,2*x)
		}
	}
}
