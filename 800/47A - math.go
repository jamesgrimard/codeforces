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
	var t,sum int = 1,0
	fmt.Fscan(in,&t)
	for j:=1;j<=t;j++{
		sum += j
		if sum == t {
			fmt.Fprintln(out,"YES")
			break
		}
		if sum > t {
			fmt.Fprintln(out,"NO")
			break
		}
	}
}

// alternatively, take input t
// t *= 8 + 1
// ie t == 10
// t = 81
// check log(2)81 == integral, if true return "YES", else return no 