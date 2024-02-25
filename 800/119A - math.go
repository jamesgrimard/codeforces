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
	var a,b,c int
	fmt.Fscan(in,&a,&b,&c)
	tally:=c
	for i:=0;i<c;i++{
		if i%2 == 0 {
			tally-=gcd(tally,a)
		} else {
			tally-=gcd(tally,b)
		}
		if tally == 0 {
			if i%2 == 0 {
				fmt.Fprintln(out,0)
				break
			} else {
				fmt.Fprintln(out,1)
				break
			}
		}
	}
}
func gcd(a,b int) int {
	if a<=b { // a smallest
		if b%a == 0 {
			return a
		} else {
			for i:=a/2;i>0;i--{
				if a%i == 0 {
					if b%i == 0 {
						return i
					}
				}
			}
		}
	} else {
		if a%b == 0 {
			return b
		} else {
			for i:=b/2;i>0;i--{
				if b%i == 0 {
					if a%i == 0 {
						return i
					}
				}
			}
		}
	}
	return 1
}