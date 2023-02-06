//package main
import( 
    "fmt"
    "math"
    "bufio"
    "os"
)
func main() {
	var t int
	var in = bufio.NewReader(os.Stdin)
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var x int
		fmt.Fscan(in,&x)
		var list []int

		for j:=1;j<=int(math.Sqrt(float64(x)));j++{
			if j*j <= x {
				list= append(list,j*j)
			} else {
				break
			}
		}

		for j:=1;j<=int(math.Sqrt(float64(x)));j++{
			if j*j*j <= x {
				tally:=0
				for k:=0;k<len(list);k++{
					if list[k] == j*j*j {
						tally++
					}
				}
				if tally == 0 {
					list= append(list,j*j*j)
				}
			} else {
				break
			}
		}
		
		fmt.Println(len(list))
	}
}
