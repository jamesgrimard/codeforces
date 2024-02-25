//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
    "strings"
)
func main() {
	// var in = bufio.NewReader(os.Stdin)
	// var out = bufio.NewWriter(os.Stdout)
	// defer out.Flush()
	scanner:= bufio.NewScanner(os.Stdin)   
	var a []string
	for i:=0;i<3;i++{
		scanner.Scan()
		var x string = strings.ReplaceAll(scanner.Text()," ","")
		a = append(a,x)
	} 
	m:= make(map[string]bool)
	m["a"] = true
	m["u"] = true
	m["o"] = true
	m["i"] = true
	m["e"] = true
	var ans bool = true
	for j:=0;j<3;j++{
		var tally int
		for k:=0;k<len(a[j]);k++{
			if m[string(a[j][k])] == true {
				tally ++
			}
		}
		if j & 1 == 0 && tally != 5 {
			ans = false
		} else {
			if j & 1 == 1 && tally != 7 {
				ans = false
			}
		}
	}
	if ans == true {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
