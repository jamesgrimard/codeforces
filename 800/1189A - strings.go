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
	var s string
	fmt.Fscan(in,&t,&s)
	if len(s) & 1 == 1 {
		fmt.Fprintln(out,1)
		fmt.Fprintln(out,s)
	} else {
		var ones int
		for j:=0;j<len(s);j++{
			if s[j] == 49 {
				ones++
			}
		}
		if ones == len(s)/2 {
			fmt.Fprintln(out,2)
			fmt.Fprintln(out,string(s[:len(s)-1]),string(s[len(s)-1]))
		} else {
			fmt.Fprintln(out,1)
			fmt.Fprintln(out,s)
		}
	}

}

// must produce string with odd count of 1's
// if len(s) is odd, return 1 and string
// else, return string - 1 , last element