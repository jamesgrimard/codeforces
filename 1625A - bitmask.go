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
		var n,m int
		fmt.Fscan(in,&n,&m)
		a:= make([]int,n)
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j])
		}
		b:= make([][]int,m)
		for k:=0;k<n;k++{
			for j:=0;j<m;j++{
				var tmp int = 1
				tmp <<= j
				b[j] = append(b[j],a[k] & tmp)
			}
		}
		var output int
		for j:=0;j<len(b);j++{
			tally:=0
			for k:=0;k<n;k++{
				if b[j][k] != 0 {
					tally++
				}
			}
			if tally > n/2 {
				output += (1 << j)
			}
		}
		fmt.Fprintln(out,output)
	}
}

// minimal possible difference requires you to split the binaries of each number and to group them in columns
// iterate over the groups of column binaries and return the majority
// ie:  0 1 0 1 1
//		0 1 1 0 0
// 		1 0 1 0 1
// returns: 0 1 1 0 1
// convert the returned binary to a number with a for loop referencing the sum += 1 << j 
// 