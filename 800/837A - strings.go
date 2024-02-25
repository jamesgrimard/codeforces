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
	
	var t int
	fmt.Scanln(&t)
	var a []string
	scan := bufio.NewScanner(os.Stdin)              // assign variable to the scanner
	scan.Split(bufio.ScanWords)                     // sets scanner to split inputs
	for scan.Scan() {                               // keeps scanning for next token until ctrl-c cancel *important
		a = append(a, scan.Text())            
	}

	count := 0
	for j:=0;j<len(a);j++{
		tally:= 0
		for k:=0;k<len(a[j]);k++{
			if isCap(string(a[j][k])) == true {
				tally++
			}
		}
		if tally > count {
			count = tally
		}
		
	}
	fmt.Println(count)
}

func isCap(a string) bool {
	return a == strings.ToUpper(a)
}
