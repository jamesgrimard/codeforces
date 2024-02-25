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
		var n,x int
		fmt.Fscan(in,&n,&x)
		if (n%2!=0 && x<=n/2+1) || (n%2==0 && x<=n/2) {
			counterx:=n
			countery:=1
			count:=x
			for j:=1;j<=n;j++{
				for k:=1;k<=n;k++{
					if j==countery && k==counterx && count>0 {
						count--
						counterx-=2
						countery+=2
						fmt.Fprintf(out,"R")
					} else {
						fmt.Fprintf(out,".")
					}
				}
				fmt.Fprintln(out,)
			}
		} else {
			fmt.Fprintln(out,-1)
		}
	}
}