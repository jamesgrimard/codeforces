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
	var t,count int
	var s string
	var a []int
	fmt.Fscan(in,&t,&s)
	for i:=0;i<t;i++{
		if s[i] == 87 {
			if count > 0 {
				a = append(a,count)
				count = 0
			}
		}
		if s[i] == 66 {
			count++
		}
	}
	if count != 0 {
		a = append(a,count)
	}
	fmt.Fprintln(out,len(a))
	for j:=0;j<len(a);j++{
		fmt.Fprintf(out,"%v ",a[j])
	}
}

// count all B's when s[j] == 'W', append count to array and reset count