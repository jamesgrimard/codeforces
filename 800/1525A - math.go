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
		var x float64
		fmt.Fscan(in,&x)
		if isIntegral(1/(x*0.01)) == true {
			fmt.Fprintln(out, int(1/(x*0.01)))
		} else {
			fmt.Fprintln(out,100/gcd(100,int(x)))
		}
	}
}
func isIntegral(val float64) bool {
	return val == float64(int(val))
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