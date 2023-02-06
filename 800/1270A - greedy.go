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
	var t int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n,f,s int
		fmt.Fscan(in,&n,&f,&s)
		var largest,player int
		for j:=0;j<f;j++{
			var x int 
			fmt.Fscan(in,&x)
			if x > largest {
				largest = x
				player = 1
			}
		}
		for j:=0;j<s;j++{
			var x int
			fmt.Fscan(in,&x)
			if x > largest {
				largest = x
				player = 2
			}
		}
		if player == 1 {
			fmt.Fprintln(out,"YES")
		} else {
			fmt.Fprintln(out,"NO")
		}
	}
}

// player with largest card always wins