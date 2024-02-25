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
		var s string
		fmt.Fscan(in,&s)
		a:= make([]int,len(s))
		for j:=0;j<len(s);j++{
			if string(s[j]) == "[" {
				a[j] = 3
			} else if string(s[j]) == "]" {
				a[j] = 4
			} else if string(s[j]) == "(" {
				a[j] = 1
			} else {
				a[j] = 2
			}
		}
		var c,count int
		for j:=len(a)-1;j>=0;j--{
			if a[j] == 2 {
				c++
			} else if a[j] == 1 && c > 0 {
				count++
				c--
			}
		}
		var sq,counts int
		for j:=len(a)-1;j>=0;j--{
			if a[j] == 4 {
				sq++
			} else if a[j] == 3 && sq > 0 {
				counts++
				sq--
			}
		}
		fmt.Fprintln(out,count+counts)
	}
}

// problem test your ability to match pairs
// in order to match a pair, split operation into two, square seaarch and curve bracket search
// create a counter that ++ when you find an opening bracket, set count to -- when u find closing bracket
// only add closing bracket if count isnt 0