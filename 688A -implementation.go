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
	var n,m,count,max int
	fmt.Fscan(in,&n,&m)
	a:= make([]string,m)
	for j:=0;j<m;j++{
		fmt.Fscan(in,&a[j])
	}
	for j:=0;j<m;j++{
		for k:=0;k<n;k++{
			if a[j][k] == 48 {
				count++
				goto out
			}
		}
		if count > max {
			max = count
		}
		count = 0
		out:
	}
	if count > max {
		max = count
	}
	fmt.Fprintln(out,max)
}

// whenever string doesn't have a 0, check count > max, update max accordingly, set count to 0
// return max streak