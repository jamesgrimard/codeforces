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
	var t,b,sum int
	fmt.Fscan(in,&t)
	a:= make([]int,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
		sum += a[i]
		if a[i] > b {
			b = a[i]
		}
	}
	sum = sum * 2 + 1
	if sum % t != 0 {
		sum = sum / t + 1
	} else {
		sum /= t
	}
	fmt.Fprintln(out,max(sum,b))
}

func max(a,b int) int {
	if a >= b {
		return a
	}
	return b
}

// take the sum of all the votes for player 2
// double that amount and add 1
// ie: 2*sum + 1
// divide that number by the amount  of voters
// return ceiling
// print max of ceiling and largest element