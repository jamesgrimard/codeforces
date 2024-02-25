//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t int
	fmt.Fscan(in,&t)
	m:= make(map[string]string)
	m["purple"] = "Power" 
	m["green"] = "Time" 
	m["blue"] = "Space" 
	m["orange"] = "Soul" 
	m["red"] = "Reality" 
	m["yellow"] = "Mind" 
	for i:=0;i<t;i++{
		var s string
		fmt.Fscan(in,&s)
		m[s] = "null"
	}
	fmt.Fprintln(out,6-t)
	for k,_ := range m {
		if m[k] != "null" {
			fmt.Fprintln(out,m[k])
		}
	}
}

// create a map with the values from the problem
// on every input, change value to null
// iterate over map and print values that are not null