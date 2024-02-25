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
		var n,l,sum,o,e int
		fmt.Fscan(in,&n,&l)
		for j:=0;j<n;j++{
			var holder int
			fmt.Fscan(in,&holder)
			sum += holder
			if holder & 1 == 1 {
				o++ 
			} else {
				e++
			}
		}
		for j:=0;j<l;j++{
			var b,x int
			fmt.Fscan(in,&b,&x)
			if b == 1 { 
				sum += (o * x)
				if x & 1 == 1 { 
					e += o
					o = 0
				}
			} else { 
				sum += (e * x)
				if x & 1 == 1 { 
					o += e
					e = 0
				}
			}
			fmt.Fprintln(out,sum)
		}
	}
}

// this problem requires us to sum extremely large numbers with specific conditions for odds and evens
// in order to meet time constraints we must avoid using arrays and instead represent o's + e's in tally form
// once you've tallied the o's & e's iterate over the list, b times and use a logic function to determine new
// tallies and total sum
// if b odd, if x odd : else if x even:
// if b even, if x odd : else if x even...