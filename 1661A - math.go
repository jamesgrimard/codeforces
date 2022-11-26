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
		a:= make([]int,n)
		b:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		for j:=0;j<n;j++{
			fmt.Fscan(in,&b[j])
		}
		for j:=n-1;j>0;j--{
			if abs(a[j] - a[j-1]) + abs(b[j] - b[j-1]) > abs(a[j] - b[j-1]) + abs(b[j] - a[j-1])  {
				a[j-1],b[j-1] = b[j-1],a[j-1]
			}
		}
		var sum int
		for j:=1;j<n;j++{
			sum += abs(a[j] - a[j-1])
		}
		for j:=1;j<n;j++{
			sum += abs(b[j] - b[j-1])
		}
		fmt.Fprintln(out,sum)
	}
}

func abs(a int) int {
	if a < 0 {
		return a * -1
	}
	return a
}

// this problem requires you to compare the abs difference between the sum of (a[j] - a[j-1]) + (b[j] - b[j-1]) 
// with (a[j] - b[j-1]) + (b[j] - a[j-1]) swap the elements for the smallest difference
//  1 3  	3-1 = 2 || 3-2 = 1
//  2 7		7-2 = 5 || 7-1 = 6				