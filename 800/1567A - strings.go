//package main
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	var t int
	var in = bufio.NewReader(os.Stdin)
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Fscan(in,&n)
		var word string
		fmt.Fscan(in,&word)
		for j:=0;j<n;j++{
			if string(word[j]) == "L" {
				fmt.Printf("%s",string(word[j:j+2]))
				j++
			} else {
				if string(word[j]) == "U" {
					fmt.Printf("D")
				} else {
					fmt.Printf("U")
				}
			}
		}
		fmt.Println()
	}
}
