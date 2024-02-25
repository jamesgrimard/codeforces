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
		var n,k int
		fmt.Fscan(in,&n,&k)
		var list [][]int
		for a:=1;a<=n;a++{
			for b:=a+1;b<=n;b++{
				if a != b {
					ap:= make([]int,2)
					if ((a + k) * b) % 4 == 0 {
						ap[0] , ap[1] = a , b
						list = append(list,ap)
					} else if ((b + k) * a) % 4 == 0 {
						ap[0] , ap[1] = b , a
						list = append(list,ap)
					} else {
						fmt.Fprintln(out,"NO")
						goto out
					}
					a++
					break
				}
			}
		}
		if len(list) == n/2 {
			fmt.Fprintln(out,"YES")
			for j:=0;j<n/2;j++{
				fmt.Fprintf(out,"%v %v\n",list[j][0],list[j][1])
			}
		} else {
			fmt.Fprintln(out,"NO")
		}
		out:
	}
}

// format of outputs must be in ascending order
// print a,b if possible, else try b,a, else return no
// use min(a,b) +=2 to skip to next pairing and continue testing either a,b or b,a for formula.