//package main
import( 
    "fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Scan(&n)
		var word string
		fmt.Scan(&word)
		var list []byte
		for j:=0;j<len(word);j++{
			tally:=0
			for k:=0;k<len(list);k++{
				if list[k] == word[j] {
					tally++
				}
			}
			if tally == 0 {
				list = append(list,word[j])
			}
		}
		fmt.Println(n+len(list))
	}
}


