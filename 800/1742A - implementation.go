//package main
import( 
    "fmt"
    "os"
    "bufio"
)
func main() {
	var t int
	var in = bufio.NewReader(os.Stdin)
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var a,b,c int
		fmt.Fscan(in,&a,&b,&c)
		if a + b == c || a + c == b || b + c == a {
			fmt.Println("YES")
		}else {
			fmt.Println("NO")
		}	
	}
}

