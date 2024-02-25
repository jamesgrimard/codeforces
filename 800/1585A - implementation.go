//package main
// github.com/jamesgrimard/codeforces
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
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		var height int = 1
		for j:=0;j<n;j++{
			if a[j] == 1 {
				if j == 0 || a[j-1] == 0 {
					height += 1

				} else {
					height += 5
				}
			} else {
				if j != 0 && a[j-1] == 0 {
					height = -1
					break
				}
			}
		}
		fmt.Fprintln(out,height)
	}
}

// iterate over set and check for 0 0 pattern or 1 1 pattern, return height = -1,+5 respectively
// else either +1 or +0