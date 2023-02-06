//package main
import( 
    "fmt"
)
func main() {
	var t int
	fmt.Scan(&t)
	var list []string = make([]string,t)
	for i:=0;i<t;i++{
		fmt.Scan(&list[i])
	}
	counter:=0
	for k,_ := range(list) {
		if string(list[k][:2]) == "OO" {
			list[k]= "++"+"|"+string(list[k][3:])
			counter++
			break
		} else if string(list[k][3:]) == "OO" {
			list[k]= string(list[k][:2])+"|"+"++"
			counter++
			break
		}
	}
	if counter > 0 {
		fmt.Println("YES")
		for k,_ := range(list) {
			fmt.Println(string(list[k]))
		}
	} else {
		fmt.Println("NO")
	}
}
