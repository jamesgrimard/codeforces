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
		var n int
		fmt.Fscan(in,&n)
		var alice,ta,bob,tb int
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x > alice || j ==0 {
				alice=x
				ta=1
				continue
			}
			if alice == x {
				ta++
			}
		}
		fmt.Fscan(in,&n)
		for j:=0;j<n;j++{
			var x int
			fmt.Fscan(in,&x)
			if x > bob || j ==0 {
				bob=x
				tb=1
				continue
			}
			if bob == x {
				tb++
			}
		}
		if alice>bob {
			fmt.Fprintln(out,"Alice")
			fmt.Fprintln(out,"Alice")
		} else if bob > alice {
			fmt.Fprintln(out,"Bob")
			fmt.Fprintln(out,"Bob")
		} else {
			fmt.Fprintln(out,"Alice")
			fmt.Fprintln(out,"Bob")
		}
	}
}
