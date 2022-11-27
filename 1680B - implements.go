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
		var r,c int
		fmt.Fscan(in,&r,&c)
		var a [][]int
		for j:=0;j<r;j++{
			var s string
			fmt.Fscan(in,&s)
			for k:=0;k<c;k++{
				var b []int
				if string(s[k]) == "R" {
					b = append(b,j+1,k+1)
					a = append(a,b)
				}
			}
		}
		for j:=1;j<len(a);j++{
			if a[j][0] < a[j-1][0] {
				a[j] , a[j-1] = a[j-1] , a[j]
				j-=2
				if j < 0 {
					j = 0
				}
			} 
		}
		a[0][0] = 0
		for j:=1;j<len(a);j++{
			if a[j][1] < a[j-1][1] {
				a[j] , a[j-1] = a[j-1] , a[j]
				j-=2
				if j < 0 {
					j = 0
				}
			} 
		}
		if a[0][0] == 0 {
			fmt.Fprintln(out,"YES")
		} else {
			fmt.Fprintln(out,"NO")
		}
	}
}

// the left most robot must also be closest to top
// record all the coords of the robots in a new array a
// sort a in ascending order according to row coord, ie : [1,3],[2,1],[3,1],[4,5].....
// mark a[0][0] with 0
// sort a in ascending order according to column coord ie: [2,1],[3,2][7,3][2,4].....
// if a[0][0] == 0 return yes