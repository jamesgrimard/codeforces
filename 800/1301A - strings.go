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
	fmt.Fscan(in, &t)
	for i:=0;i<t;i++{
		var a,b,c string
		fmt.Fscan(in,&a,&b,&c)
		for j:=0;j<len(a);j++{
			if a[j] != c[j] && b[j] != c[j] {
				fmt.Fprintln(out,"NO")
				goto out
			}
		}
		fmt.Fprintln(out,"YES")
		out:
	}
}

// must make string a == b
// must swap either a with c, or b with c
// therefore, if atleast a[i] or b[i] == c[i] then continue, else return no
// we want to find c[i] in either a[i] or b[i] so that we can replace c[i] with the indice from a or b
// that doesnt equal c[i]