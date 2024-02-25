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
	var n,k int
	fmt.Fscan(in,&n,&k)
	for j:=0;j<n;j++{
		for i:=0;i<n;i++{
			if i == j {
				fmt.Fprintf(out,"%v ",k)
				continue
			}
			fmt.Fprintf(out,"%v ",0)
		}
		fmt.Fprintln(out)
	}
}

// place k at the squares, else 0