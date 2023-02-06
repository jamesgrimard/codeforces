//package main
import( 
    "fmt"
    "sort"
    "strings"
)
func main() {
	var x int
	fmt.Scan(&x)
	for i:=0;i<x;i++{
		var word string
		fmt.Scan(&word)
		list:= strings.Split(word,"")
		sort.Strings(list)
		red:=1
		for j:=1;j<len(list);j++{
			if list[j] != list[j-1] {
				red++
			}
		}
		for j:=0;j<len(list);j++{ // keep singles & doubles
			counter:=1
			for k:=j+1;k<len(list);k++{
				if list[j] == list[k] {
					counter++
				}
				if counter >= 3 {
					counter--
					list = append(list[:k],list[k+1:]...)
					k--
				}
			}
		}
		fmt.Println(len(list)/2)
	}
}