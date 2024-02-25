//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
)
func main() {
	var in = bufio.NewReader(os.Stdin)
	var out = bufio.NewWriter(os.Stdout)
	defer out.Flush()
	a:= make([]string,9)
	for i:=0;i<3;i++{
		var x string
		fmt.Fscan(in,&x)
		for j:=0;j<3;j++{
			if string(x[j]) == "X" {
				a[i*3+j] = "X"
			}
		}
	}
	for j:=8;j>=5;j--{
		if a[j] != a[8-j] {
			fmt.Fprintln(out,"NO")
			goto out
		}
	}
	fmt.Fprintln(out,"YES")
	out:
}