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
		var n int
		fmt.Fscan(in,&n)
		a := make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		var s,f int
		for j:=0;j<n;j++{
			if a[j] == 1 {
				continue
			}
			s = j-1
			break
		}
		for j:=n-1;j>=0;j--{
			if a[j] == 1 {
				continue
			}
			f = j+1
			break
		}
		fmt.Fprintln(out,f-s)
	}
}

// push into array as far as you can wtih a[i] == 0 
// when you can push no further, record indice of last 1
// do in reverse aswell
// starting indice  - finishing indice = jumps required.