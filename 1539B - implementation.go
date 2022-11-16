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
	var n,t int
	fmt.Fscan(in,&n,&t)
	var word string
	fmt.Fscan(in,&word)
	var list [100001]int
	for j:=0;j<n;j++{
		if j==0{
			list[j]= int(word[j]-96)
		} else {
			list[j]+= int(word[j]-96)+list[j-1]
		}
	}
	for i:=0;i<t;i++{
		var l,r int
		fmt.Fscan(in,&l,&r)
		if l == 1 {
			fmt.Fprintln(out,list[r-1])
		} else {
			fmt.Fprintln(out,list[r-1]-list[l-1]+(list[l-1]-list[l-2]))
		}
	}
}