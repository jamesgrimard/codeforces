//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
    "sort"
)
type Pair struct {
	school int
	dmg int
}
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n,sum,z,o int
		fmt.Fscan(in,&n)
		var a []Pair 
		for j:=0;j<n;j++{
			var x Pair
			fmt.Fscan(in,&x.school)
			a = append(a,x)
			if x.school == 1 {
				o++
			} else {
				z++
			}
		}
		for j:=0;j<n;j++{
			fmt.Fscan(in,&a[j].dmg)
		}
		sort.Slice(a, func(j, k int) bool { // sorting function for struct array
		    return a[j].dmg < a[k].dmg // ascending order
		})
		var r1,r0 int = min(z,o),min(z,o)
		for j:=n-1;j>=0;j--{
			if a[j].school == 1 {
				if r1 > 0 {
					sum += a[j].dmg * 2
					r1--
				} else {
					sum += a[j].dmg
				}
			} else {
				if r0 > 0 {
					sum += a[j].dmg * 2
					r0--
				} else {
					sum += a[j].dmg
				}
			} 
		}
		if z == o {
			sum -= a[0].dmg
		}
		fmt.Fprintln(out,sum)
	}
}
func min(a,b int) int {
	if a <= b {
		return a
	}
	return b
}

// took inputs into a struct, struct went into an array 
// sort the array using the sort.Slice(a,func) method (must use this method due to time constraints)
// take the min(zeros,ones) assign this number to variables r1,r0
// iterate in reverse over the sorted string and subtract from r1,r0 tally when you count a 0 or 1 respectively
// if tally is > 0 for r1 | r2 : sum += a[j] * 2, else sum += a[j]
// if the zeros and ones are equal then sum the entire array with the double multiplier and subtract the first
// elementn from the array.