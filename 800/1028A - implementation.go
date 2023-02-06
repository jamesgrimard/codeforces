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
	var y,x int
	fmt.Fscan(in,&y,&x)
	a:= make([]string,y)
	for i:=0;i<y;i++{
		fmt.Fscan(in,&a[i])
	}
	var r,c,count int
	for j:=0;j<y;j++{
		for k:=0;k<x;k++{
			if string(a[j][k]) == "B" {
				count++
				if count == 1 {
					r,c = j,k
				}
			}
		}
		if count > 0 {
			break
		}
	}
	r += (count/2)
	c += (count/2)
	fmt.Fprintln(out,r+1,c+1)
}