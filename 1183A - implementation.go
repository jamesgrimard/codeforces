//package main
import( 
    "fmt"
    "bufio"
    "os"
    "strconv"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var x int
	fmt.Fscan(in,&x)
	for j:=0;j<=10;j++{
		xs:= strconv.Itoa(x+j)
		count:=0
		for i:=0;i<len(xs);i++{
			sx,_:= strconv.Atoi(string(xs[i]))
			count+=sx
		}
		if count%4 == 0 {
			fmt.Fprintln(out,x+j)
			break
		}
	}
}
