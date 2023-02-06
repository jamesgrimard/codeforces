package main
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
		var n int64 
		fmt.Fscan(in,&n)
		for gcd(n,summer(n)) == 1 {
			n++
		}
		fmt.Fprintln(out,n)
	}
}

func gcd(x,y int64) int64 { // looping function that returns itself until y=0 condtion met
	if y==0 {
		return x
	}
	return gcd(y,x%y)
}

func summer(x int64) int64 {
	var sum int64
	for x != 0 {
		sum+=(x%10)
		x/=10
	}
	return sum
}