//package main
import( 
    "fmt"
    "bufio"
    "os"
)
func main() {
	in:= bufio.NewReader(os.Stdin)
	out:= bufio.NewWriter(os.Stdout)
	defer out.Flush()
	c:=0
	for i:=0;i<3;i++{
		var x int
		fmt.Fscan(in,&x)
		c+=x
	}
	m:=0
	for i:=0;i<3;i++{
		var x int
		fmt.Fscan(in,&x)
		m+=x
	}
	var n int
	fmt.Fscan(in,&n)
	
	if isIntegral(float64(c)/5) == false {
		c= c/5+1
	} else {
		c/=5
	}	
	if isIntegral(float64(m)/10) == false {
		m= m/10+1
	} else {
		m/=10
	}
	if n-c-m >= 0 {
		fmt.Fprintln(out,"YES")
	} else {
		fmt.Fprintln(out,"NO")
	}
}
func isIntegral(val float64) bool {
	return val == float64(int(val))
}