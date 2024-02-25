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
	var n,x int
	fmt.Fscan(in,&n,&x)
	list:= make([]int,n)
	var max bool = false
	for j:=0;j<n;j++{	
		fmt.Fscan(in,&list[j])
		if list[j] > x {
			max = true
		}
	}
	var tally int
	for j:=0;j<len(list);j++{
		if list[j] <= x {
			tally++
			continue
		}
		break
	}
	for j:=len(list)-1;j>=0;j--{
		if list[j] <= x {
			tally++
			continue
		}
		break
	}
	if max == false {
		fmt.Fprintln(out,n)
	} else {
		fmt.Fprintln(out,tally)
	}
}