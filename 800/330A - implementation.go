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
	var y,x int
	fmt.Fscan(in,&y,&x)
	list:= make([]string,y)
	for j:=0;j<y;j++{
		fmt.Fscan(in,&list[j])
	}
	var coords []int
	for j:=0;j<y;j++{
		for k:=0;k<x;k++{
			if string(list[j][k]) == "S" {
				coords = append(coords,k,j)
			}
		}
	}
	if len(coords) == 0 {
		fmt.Fprintln(out,x*y)
	} else {
		rows:=0
		for k:=0;k<y;k++{
			for j:=1;j<len(coords);j+=2{
				if k == coords[j] {
					goto out
				}
			}
			rows++
			out:
		}
		
		columns:=0
		for k:=0;k<x;k++{
			for j:=0;j<len(coords);j+=2{
				if k == coords[j] {
					goto out2
				}
			}
			columns++
			out2:
		}
		fmt.Fprintln(out,((rows*x) + (columns*y)) - (columns*rows))
	}
}
