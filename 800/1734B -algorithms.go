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
		for j:=0;j<n;j++{
			for k:=0;k<=j;k++{
				if k == 0 || k == j {
					fmt.Fprintf(out,"1 ")
				} else {
					fmt.Fprintf(out,"0 ")
				}
			}
			fmt.Fprintln(out)
		}
	}
}

// the total sum of each node must be equal to the floor level
// therefore, every node that isn't either the first or last node on a floor must be set to 0