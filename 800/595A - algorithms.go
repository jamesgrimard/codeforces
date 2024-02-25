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
	var n,m,count int
	fmt.Fscan(in,&n,&m)
	for j:=0;j<n;j++{
		tally:= 0
		for k:=1;k<=m*2;k++{
			var x int
			fmt.Fscan(in,&x)
			if x == 1 {
				tally++
			}	
			if k % 2 == 0 {
				if tally > 0 {
					count++
					tally = 0
				}
			}
		}
	}
	fmt.Fprintln(out,count)
}

// n floors, m flats on each floor
// flat has 2 windows (elements)
// create a tally for each input, check tally is > 0 for every 2 inputs, if true reset tally and add to count