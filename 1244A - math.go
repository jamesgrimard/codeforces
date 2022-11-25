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
		var a,b,c,d,k int
		fmt.Fscan(in,&a,&b,&c,&d,&k)
		var pens,pencils int = a / c, b / d
		if a % c != 0 {
			pens++
		}
		if b % d != 0 {
			pencils++
		}
		if pens + pencils > k {
			fmt.Fprintln(out,-1)
		} else {
			fmt.Fprintln(out,pens,pencils)
		}
	}
}

// lectures a
// pracs 	b
// pens needed a / c and if a % c != 0 + 1
// pencils needed b / d and if b % d != 0 + 1
// 