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
	var t int
	fmt.Fscan(in,&t)
	mapper:= make(map[int]int)
	for i:=0;i<t;i++{
		var x int
		fmt.Fscan(in,&x)
		if mapper[x] >= 1 {
			mapper[x]+=1
			continue
		}
		mapper[x] = 1
	}
	largest:=0
	for _,j := range mapper {
		if j >= largest {
			largest=j
		}
	}
	fmt.Fprintln(out,largest)
}