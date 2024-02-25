//package main
import( 
    "fmt"
    "os"
    "bufio"
)
func main() {
	var n int
	var in = bufio.NewReader(os.Stdin)
	fmt.Fscan(in,&n)
	recent:= 0
	recent_len:= 0
	max_len:= 0
	for i:=0;i<n;i++{
		var x int
		fmt.Fscan(in,&x)
		if x > recent {
			recent_len++
			recent=x
			if i == n-1 {
				if max_len < recent_len{
					max_len= recent_len
				}
			}
		} else {
			if max_len < recent_len {
				max_len= recent_len
			}
			recent=x
			recent_len= 1
		}
	}
	fmt.Println(max_len)
}

