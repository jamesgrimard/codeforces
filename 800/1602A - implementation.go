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
		var s,smallest string
		fmt.Fscan(in,&s)
		var holder byte
		var index int
		for j:=0;j<len(s);j++{
			if s[j] < holder || j == 0 {
				holder = s[j]
				smallest = string(s[j])
				index = j
			}
		}
		fmt.Fprintf(out,"%v %v",smallest,string(s[:index])+string(s[index+1:]))
		fmt.Fprintln(out)
	}
}

// iterate over string, find lowest value 
// print lowest value, cut lowest value out of string and return result ie cut s[3] out : s[:3]+s[4:]