//package main
import( 
    "fmt"
    "strings"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var alphabet,word string
		fmt.Scan(&alphabet,&word)
		strings.Split(alphabet,"")
		input_map:= make(map[string]int,len(alphabet))
		for j:=0;j<len(alphabet);j++{
			input_map[string(alphabet[j])] = j
		}
		counter:=0
		for j:=1;j<len(word);j++{
			counter+=abs(input_map[string(word[j])]-input_map[string(word[j-1])])
		}
		fmt.Println(counter)
	}
}

func abs(x int) int {
	var result int
	if x > 0 {
		result = x
	} else {
		if x < 0 {
			result = x*-1
		}
	}
	return result
}