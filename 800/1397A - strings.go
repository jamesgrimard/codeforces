//package main
import( 
    "fmt"
    "sort"
    "strings"
)
func main() {
	var t int
	fmt.Scan(&t)
	for i:=0;i<t;i++{
		var n int
		fmt.Scan(&n)
		var word string
		for j:=0;j<n;j++{
			var string string
			fmt.Scan(&string)
			word+=string
		} 
		if n == 1 {
			fmt.Println("YES")
			continue
		}
		if len(word)%n != 0 {
			fmt.Println("NO")
			continue
		}
		
		splitter:= strings.Split(word,"")
		sort.Strings(splitter)
		if n%2==0{
			for j:=1;j<len(word);j+=2{
				if string(splitter[j-1]) != string(splitter[j]) {
					fmt.Println("NO")
					goto out
				} 
			}
		}else{
			for j:=n-1;j<len(word);j+=n{
				if string(splitter[j-n+1]) != string(splitter[j]) {
					fmt.Println("NO")
					goto out
				} 
			}
		}
		
		fmt.Println("YES")
		out:
	}
}
