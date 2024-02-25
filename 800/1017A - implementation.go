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
	var rank []int
	for i:=0;i<t;i++{
		var a,b,c,d int
		fmt.Fscan(in,&a,&b,&c,&d)
		sum := a + b + c + d
		rank = append(rank,sum)
	}
	var place int
	for j:=1;j<t;j++{
		if rank[0] < rank[j] {
			place++
		}
	}
	fmt.Fprintln(out,place+1)
}

// sum scores of all students and append to new list
// iterate over all scores and ++ if our score is less than.