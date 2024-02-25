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
	var x int
	fmt.Fscan(in,&x)
	for j:=48;j<60;j++{
		if isComposite(x + j) == true && isComposite(j) == true {
			fmt.Fprintln(out,x+j,j)
			break
		}
	}
}

func isComposite(a int) bool {
	for j:=2;j<=10;j++{
		if j != a {
			if a % j == 0 {
				return true
			} 
		}
	}
	return false
}

// find two numbers x,y whose difference = n
// pick an arbitrary number as a starting point ie: 48
// y,x = 48,n + y
// create a sum loop from +1 -> +10
// check if x,y are composite, return x,y
// check composite by creating short mod for loop 2 -> 10
// if i mod j == 0 return true: isComposite