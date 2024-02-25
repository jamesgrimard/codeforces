//package main
import( 
    "fmt"
    "strings"
    "os"
)
func main() {
	var word string
	fmt.Scan(&word)
	var counter int
	q_counter:= strings.Count(word,"Q")
	a_counter:= strings.Count(word,"A")
	if a_counter == 0 || q_counter <= 1 {
		fmt.Println(0)
		os.Exit(0)
	}
	for i:=0;i<len(word);i++{
		if a_counter == 0 {
			fmt.Println(counter)
			os.Exit(0)
		} 
		if string(word[i]) == "Q" {
			for j:=i+1;j<len(word);j++{
				if string(word[j]) == "A" {
					for k:=j+1;k<len(word);k++{
						if string(word[k]) == "Q" {
							counter++
							continue
						}
					}
				}
			}
		} else if string(word[i]) == "A" {
			a_counter--
		}
	}
	fmt.Println(counter)
}
