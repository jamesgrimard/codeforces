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
	var t,z,o int
	fmt.Fscan(in,&t)
	a:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
		if a[i] == 0 {
			z++
		} else {
			o++
		}
	}
	for j:=0;j<t;j++{
		if a[j] == 1 {
			o--
		} else {
			z--
		}
		if z == 0 || o == 0 {
			fmt.Fprintln(out,j+1)
			break
		}
	}
}