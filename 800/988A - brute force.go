//package main
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var n,k int
	fmt.Fscan(in,&n,&k)
	mapper:= make(map[int]int)
	for j:=0;j<n;j++{
		var x int
		fmt.Fscan(in,&x)
		if mapper[x] != 0 {
			continue
		}
		mapper[x] = j+1
	}
	if len(mapper) >= k {
		fmt.Fprintln(out,"YES")
		tally:=1
		for _,value := range mapper {
			if tally > k {
				break
			}
			fmt.Fprintf(out,"%v ",value)
			tally++
		}
	} else {
		fmt.Fprintln(out,"NO")
	}
}