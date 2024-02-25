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
	for i:=0;i<t;i++{
		var n int
		fmt.Fscan(in,&n)
		list:= make([]int,2*n)
		for j:=0;j<n*2;j++{
			fmt.Fscan(in,&list[j])
		}
		if n==1 {
			fmt.Fprintln(out,list[1],list[0])
			continue
		} else {
			for {
				counter:=0
				for j:=1;j<2*n-1;j++{
					if j == 1 {
						if (list[j]+list[2*n-1])/2 == list[j-1] {
							list[2*n-1],list[j-1],list[j] = list[j],list[2*n-1],list[j-1]
							counter++
						}
					}
					if (list[j-1]+list[j+1])/2 == list[j] {
						list[j-1],list[j],list[j+1] = list[j+1],list[j-1],list[j]
						counter++
					}
					if j == 2*n-2 {
						if (list[j]+list[0])/2 == list[j+1] {
							list[j],list[j+1],list[0] = list[j+1],list[j],list[0]
							counter++
						}
					}
				}
				if counter == 0 {
					break
				}
			}
		}
		for j:=0;j<n*2;j++{
			fmt.Fprintf(out,"%v ",list[j])
		}
		fmt.Fprintln(out,)
	}
}