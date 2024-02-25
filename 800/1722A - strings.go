//package main
import( 
    "fmt"
    "strings"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		x:= "Timur"
		var (
			n,tally int
			input string
		)
		fmt.Scan(&n,&input)
		if n == 5 {
			for k:=0;k<5;k++{
				if strings.Count(input, string(x[k])) == 1 {
					tally++
				}
			}
			if tally == 5 {
				fmt.Println("YES")
				continue
			}
		}
		fmt.Println("NO")
	}
}