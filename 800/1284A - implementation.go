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
	m1:= make(map[int]string)
	m2:= make(map[int]string)
	for i:=0;i<n;i++{
		var tmp string
		fmt.Fscan(in,&tmp)
		m1[i+1] = tmp
	}
	for i:=0;i<m;i++{
		var tmp string
		fmt.Fscan(in,&tmp)
		m2[i+1] = tmp
	}
	var t int
	fmt.Fscan(in,&t)
	for j:=0;j<t;j++{
		var x int
		fmt.Fscan(in,&x)
		a:= x % n
		b:= x % m
		if a == 0 {
			a = n
		}
		if b == 0 {
			b = m
		}
		fmt.Fprintln(out,m1[a]+m2[b])
	}
}

// use a map feature to index the 2 sets
// modulo will give the index of the ith query, be sure to set index to n,m if x % n,m == 0