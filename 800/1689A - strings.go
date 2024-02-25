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
		var n,m,k,a_count,b_count int 
		var as,bs string
		fmt.Fscan(in,&n,&m,&k,&as,&bs)
		a:= []byte(as)
		b:= []byte(bs)
		SortMe(a)
		SortMe(b)
		var list []byte
		for min(len(a),len(b)) > 0 {
			if (a[0] <= b[0] || b_count == k) && a_count < k {
				list = append(list,a[0])
				a = a[1:]
				b_count = 0
				a_count++
			} else {
				list = append(list,b[0])
				b = b[1:]
				a_count = 0
				b_count++
			}		
		}
		for j:=0;j<len(list);j++{
			fmt.Fprintf(out,"%v",string(list[j]))
		}
		fmt.Fprintln(out)
	}
}

func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}

func SortMe(a []byte) []byte {
	for j:=1;j<len(a);j++{
		if a[j] < a[j-1] {
			a[j] , a[j-1] = a[j-1] , a[j]
			j -= 2
			if j < 0 {
				j = 0
			}
		}
	}
	return a
}

// split strings a,b into separate lists
// sort strings a,b ascending
// create new list
// iterate over each index of a,b and check for lowest, if lowest and count < k -> append to new list
// else, append other to new list and reset count for previous array
// delete appended element from original list
// keep in a for loop with array len > 0 condition
