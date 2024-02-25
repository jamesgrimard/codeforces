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
	var t,count int
	fmt.Fscan(in,&t)
	a:= make([]string,t)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
	}
	for j:=0;j<t;j++{
		for k:=0;k<t;k++{	
			if string(a[j][k]) == "C" {
				for l:=k+1;l<t;l++ {
					if string(a[j][l]) == "C" {
					 	count++
					}
				}
				for l:=j+1;l<t;l++ {
					if string(a[l][k]) == "C" {
					 	count++
					}
				}				
			}	
		}
	}
	fmt.Fprintln(out,count)
}