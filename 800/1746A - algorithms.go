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
		var n,k int
		fmt.Fscan(in,&n,&k)
		var yes bool
		for j:=0;j<n;j++{
			var tmp int
			fmt.Fscan(in,&tmp)
			if tmp == 1 {
				yes = true
			}
		}
		if yes == true {
			fmt.Fprintln(out,"YES")
		} else {
			fmt.Fprintln(out,"NO")
		}
	}
}
// all sets can be converted into [1] if there is atleast one 1 present.