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
		var n,count int
		fmt.Fscan(in,&n)
		for j:=n*4;j>=(n*4)/2+1;j-=2{
			count++
			fmt.Fprintf(out,"%v ",j)
			if count == n {
				break
			}
		}
		fmt.Fprintln(out)
	}
}

// if gcd == 1,a,b (a%b==0) or (b%a==0) will indulge
// won't indulge if not divisible and not prime
// all evens are not primes and all evens above n/2 are not divisible into eachother, but do share a gcd of 2