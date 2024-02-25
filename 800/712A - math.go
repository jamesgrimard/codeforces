//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
)
func main() {
	var in = bufio.NewReader(os.Stdin)
	var out = bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int 
	fmt.Fscan(in,&t)
	a:= make([]int,t+1)
	for i:=0;i<t;i++{
		fmt.Fscan(in,&a[i])
	}
	for i:=0;i<t;i++{
	 	fmt.Fprintf(out,"%v ",a[i]+a[i+1])	
	}
	fmt.Fprintln(out)
}
