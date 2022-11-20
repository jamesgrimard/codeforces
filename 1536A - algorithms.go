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
		var n,max int
		low:=9999999999
		fmt.Fscan(in,&n)
		var neg,zero bool
		list:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&list[j])
			if list[j] < 0 {neg=true}
			if list[j] == 0 {zero=true}
			if list[j] > max || j==0 {max=list[j]}
			if list[j] < low && (list[j] != 0 || list[j] != 1) {low=list[j]}
		}
		if neg == true {
			fmt.Fprintln(out,"NO")
			continue
		} 
		if max > 300 || (max == 300 && zero == true) {
			for j:=1;j<n;j++{
				if list[j]%low != 0 {
					fmt.Fprintln(out,"NO")
					goto out
				}
			}
			fmt.Fprintln(out,"YES")
			for j:=0;j<n;j+=low{
				fmt.Fprintf(out,"%v ",list[j])
			}
			fmt.Fprintln(out)
		}else{
			fmt.Fprintln(out,"YES")
			if zero==true{
				fmt.Fprintln(out,max+1)
				for j:=0;j<=max;j++ {fmt.Fprintf(out,"%v ",j)}				
			} else {
				fmt.Fprintln(out,max)
				for j:=1;j<=max;j++ {fmt.Fprintf(out,"%v ",j)}
			}
			fmt.Fprintln(out)
		}
		out:
	}
}
