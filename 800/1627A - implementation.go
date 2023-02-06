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
		var y,x,r,c int 
		fmt.Fscan(in,&y,&x,&r,&c)
		list:= make([]string,y)
		for j:=0;j<y;j++{
			fmt.Fscan(in,&list[j])
		}
		y-=1
		x-=1
		r-=1
		c-=1
		if string(list[r][c]) == "B" {
			fmt.Fprintln(out,0)
		} else{
			for j:=0;j<=y;j++{
				for k:=0;k<=x;k++{
					if string(list[j][k]) == "B" {
						goto out
					}
				}
			}
			fmt.Fprintln(out,-1)
			continue
			out:
			for j:=0;j<=x;j++{
				if string(list[r][j]) == "B" {
					fmt.Fprintln(out,1)
					goto out2
				}
			}
			for j:=0;j<=y;j++{
				if string(list[j][c]) == "B" {
					fmt.Fprintln(out,1)
					goto out2
				}
			}
			fmt.Fprintln(out,2)
			out2:
		}
	}
}