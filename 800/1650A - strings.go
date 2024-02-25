//package main
import( 
    "fmt"
    "strings"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var word,letter string
		fmt.Scan(&word,&letter)
		if strings.IndexAny(word,letter) == -1 {
			fmt.Println("NO")
		} else {
			for j:=0;j<len(word);j++ {
				if string(word[j]) == letter {
					if j%2 == 0 {
						fmt.Println("YES")
						goto out
					}
				}
			}
			fmt.Println("NO")
			out:
		}
	}
}