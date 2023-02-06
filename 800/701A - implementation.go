//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
)
type KV struct {
	Index int
	Value int
}
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	m:= make(map[int]KV)
	for i:=0;i<t;i++{
		var tmp KV
		fmt.Fscan(in,&tmp.Value)
		tmp.Index = i+1
		m[i] = tmp
	}
	for i:=1;i<t;i++ {
		if m[i-1].Value > m[i].Value {
			m[i-1] , m[i] = m[i] , m[i-1]
			i-=2
			if i < 0 {
				i = 0
			}
		}
	}
	for j:=0;j<t/2;j++{
		fmt.Fprintln(out,m[j].Index,m[t-1-j].Index)
	}
}	

// this problem is testing your ability to build structures in maps
// we are required to use 2 different indexes to sort based on values
// create a struct with an index and a value
// create a variable with the struct type, add each element with index to this variable, then add variable to map
// sort the map in ascending order by sorting by m[i].Value
// iterate over map using sandwich method; m[i] + m[n-1+i] to print coords.