//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
    "sort"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush() 
	var t int
	fmt.Fscan(in,&t)
	a:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
	}	
	sort.Ints(a)
	for j:=0;j<t;j++{
		for k:=j+1;k<t;k++{
			if a[k] % a[j] == 0 {
				a = append(a[:k],a[k+1:]...)
				k--
				t--
			}
		}
	}	
	fmt.Fprintln(out,len(a))
}
