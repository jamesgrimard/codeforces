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
	for i:=0;i<t;i++{
		var n,d int
		fmt.Fscan(in,&n,&d)
		var lowest,second_lowest int = 999999999,9999999999 
		var highest int = 0
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x >= highest {
				highest = x
			}
			if x <= lowest {
				second_lowest = lowest
				lowest = x
			}
			if x > lowest && x < second_lowest {
				second_lowest = x
			}
		}
		if d >= highest || lowest+second_lowest <= d {
			fmt.Println("YES")
		} else {
			fmt.Println("NO")
		}
	}
}