//package main
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
		var a,b,c int
		fmt.Fscan(in,&a,&b,&c)
		if c == 0 && a==b && a>1 {
			fmt.Fprintln(out,"YES")
			continue
		}
		if number_of_odds_inclusive(a,b) <= c {
			fmt.Fprintln(out,"YES")
		} else{
			fmt.Fprintln(out,"NO")
		}
	}
}
func number_of_odds_inclusive(l,u int) int {
	if l%2 != 0 && u%2 != 0 {
		return ((u-l)/2-1)+2
	}
	if l%2 != 0 || u%2 != 0 {
		return ((u-l)/2)+1 
	}
	return ((u-l)/2)
}