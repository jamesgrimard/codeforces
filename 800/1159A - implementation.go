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
	var t,sum int
	fmt.Fscan(in,&t)
	var s string
	fmt.Fscan(in,&s)
	for i:=0;i<t;i++{
		if string(s[i]) == "+" {
			sum++	

		} else {
			sum--
		}
		if sum < 0 {
			sum = 0
		}

	}	
	fmt.Fprintln(out,sum)		
	
}
