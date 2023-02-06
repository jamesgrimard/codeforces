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
	var n,k,tally int
	fmt.Fscan(in,&n,&k)
	for j:=0;j<n;j++{
		var x string
		fmt.Fscan(in,&x)
		var count int
		for g:=0;g<len(x);g++{
			if x[g] == 55 || x[g] == 52 {
				count++
			}
		}
		if count <= k {
			tally++
		}
	}
	fmt.Fprintln(out,tally)
}

// of the set, how many have <= 4 lucky digits, (lucky digits = 4,7)