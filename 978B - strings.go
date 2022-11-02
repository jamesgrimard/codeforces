//package main
import( 
    "fmt"
    "strings"
)
func main() {
	var n int
	var word string
	fmt.Scan(&n,&word)
	xxx_count:= strings.Count(word,"xxx")
	x_count_start:= strings.Count(word,"x")
	if xxx_count == 0 {
		fmt.Println(0)
	} else {
		for j:=0;j<len(word)-2;j++{
			if string(word[j:j+3]) == "xxx" {
				word= string(word[:j])+string(word[j+1:])
				j=j-1
			}
		}
		fmt.Println(x_count_start-strings.Count(word,"x"))
	}
}