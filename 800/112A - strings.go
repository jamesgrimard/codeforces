//package main

import(
	"fmt"
	"strings"
	"os"
)

var a,b string

var t int = 0
var t2 int = 0

var alphabet = [26]string{"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"}
	
func main() {

	fmt.Scan(&a,&b)

	a := strings.ToLower(a)
	b := strings.ToLower(b)

	for i := range a {
	
		if a[i] != b[i] {
			for x := range alphabet {
				switch {
				case strings.ToLower(string(a[i])) == alphabet[x]:
					fmt.Println(-1)
					os.Exit(0)
				case strings.ToLower(string(b[i])) == alphabet[x]:
					fmt.Println(1)
					os.Exit(0)
				}
			}
		}
	}	
	
	fmt.Println(0)
 
}
