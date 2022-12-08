//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
    "strings"
)
func main() {
	scanner:= bufio.NewScanner(os.Stdin)    
	scanner.Scan()
	var a string = strings.ReplaceAll(scanner.Text()," ","")
	m:= make(map[string]bool)
	m["a"] = true
	m["e"] = true
	m["i"] = true
	m["o"] = true
	m["u"] = true
	m["y"] = true
	if m[strings.ToLower(string(a[len(a)-2]))] == true {
		fmt.Println("YES")	
	} else {
		fmt.Println("NO") 
	}  
}

// take in inputs and strip spaces
// check s[len(s)-2] == a,e,i,o,u,y return yes, else return no