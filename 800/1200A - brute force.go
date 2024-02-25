//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
    "strconv"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var n int
	fmt.Fscan(in,&n)
	var s string
	fmt.Fscan(in,&s)
	r:= make([]int,10)
	for j:=0;j<n;j++{
		if string(s[j]) == "L" { 
			for k:=0;k<n;k++{
				if r[k] == 0 {
					r[k] = 1
					break
				}
			}
		} else if string(s[j]) == "R" {
			for k:=9;k>=0;k--{
				if r[k] == 0 {
					r[k] = 1
					break
				}
			}
		} else {
			x,_ := strconv.Atoi(string(s[j]))
			r[x] = 0
		}
	}
	for j:=0;j<10;j++{
		fmt.Fprintf(out,"%v",r[j])
	}
}

// line of length 10. there's an entrance at both ends l,r
// there are 3 different kinds of inputs: L R 0-9 
// entered through left end, entered through right end, indice recently left now empty
// system order follows FIFO, first-in-first-out, first in fills closest indice, furthest fills furthest
// loop over all occurences n
// check for l,r,0-9
// nest a loop to search for closest vacancy 0, change to filled 1