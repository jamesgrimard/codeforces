//package main
import( 
    "fmt"
    "bufio"
    "os"
    "strings"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var x,y int
		fmt.Fscan(in,&x,&y)
		var directions string
		fmt.Fscan(in,&directions)
		counter:=0
		if x > 0 {
			if strings.Count(directions,"R") >= x {
				counter++
			}
		}
		if x < 0 {
			if strings.Count(directions,"L") >= abs(x) {
				counter++
			}
		}
		if y > 0 {
			if strings.Count(directions,"U") >= y {
				counter++
			}
		}
		if y < 0 {
			if strings.Count(directions,"D") >= abs(y) {
				counter++
			}
		}
		if x == 0 {
			counter++
		}
		if y == 0 {
			counter++
		}
		if counter == 2 {
			fmt.Fprintln(out,"YES")
		} else {
			fmt.Fprintln(out,"NO")
		}
	}
}
func abs(x int) int {
	var result int
	if x > 0 {
		result = x
	} else {
		if x < 0 {
			result = x*-1
		}
	}
	return result
}