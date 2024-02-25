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
	var sum int
	m:= make(map[int]int)
	var a []int
	for i:=0;i<5;i++{
		var x int
		fmt.Fscan(in,&x)
		m[x]++
		sum += x
	}
	for k,v := range m {
		if v >= 3 {
			a = append(a,k*3)
			continue
		} else if v == 2 {
			a = append(a,k*2)
		}				     	
	}
	var mx int
	for i:=0;i<len(a);i++{
		if a[i] > mx {
			mx = a[i]
		}
	}
	fmt.Fprintln(out,sum - mx)				
}

// take all inputs into a hash map with a tally and sum total
// iterate through the map and find any tallied number >= 2 times the value by either 2 or 3 and append to new array a
// iterate through array a, find mx value and subtract from total sum. 