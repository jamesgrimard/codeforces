//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
)
func main() {
	var in = bufio.NewReader(os.Stdin)
	var out = bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var a,b,c,d int
	fmt.Fscan(in,&a,&b,&c,&d)
	sheetspp := b / c
	if b % c != 0 {
		sheetspp++
	}
	totalsheets := a * sheetspp
	totalpacks := totalsheets / d
	if totalsheets % d != 0 {
		totalpacks++
	}
	fmt.Fprintln(out,totalpacks)
}