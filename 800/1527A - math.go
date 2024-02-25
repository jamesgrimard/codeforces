//package main
import( 
    "fmt"
    "bufio"
    "os"
    //"math"
)
func main() {
	var t int
	var in = bufio.NewReader(os.Stdin)
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var x int
		fmt.Fscan(in,&x)
		tmp:=1
		for j:=1;j<=x;j++ {
			tmp*=2
			if tmp > x {
				fmt.Println((tmp/2)-1)
				break
			}
		}
	}
}
