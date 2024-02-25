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
	var n,m int
	fmt.Fscan(in,&n,&m)
	a:= make([]int,n)
	mapper:= make(map[int]bool)
	for j:=0;j<n;j++{
		fmt.Fscan(in,&a[j])
	}
	for j:=0;j<m;j++{
		var x int
		fmt.Fscan(in,&x)
		mapper[x] = true
	}
	for j:=0;j<n;j++{
		if mapper[a[j]] == true {
			fmt.Fprintf(out,"%v ",a[j])
		}
	}
}