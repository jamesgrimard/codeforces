//package main
// github.com/jamesgrimard/codeforces
import( 
    "fmt"
    "bufio"                     
    "os"
)
func main() {
	var in = bufio.NewReader(os.Stdin)
	var out = bufio.NewWriter(os.Stdout)
	defer out.Flush()
	var t,p,n int
	fmt.Fscan(in,&t)
	for i:=0;i<t;i++{
	 	var x int
	 	fmt.Fscan(in,&x)
	 	if x < 0 {
	 	 	n++
	 	} else if x > 0 {
	 		p++
	 	}	
	}
	if t & 1 == 1 {
		t += 1	
  	
	}
	if n >= p && n >= t/2{
		fmt.Fprintln(out,-1)
		
	}   else if p >= n && p >= t/2 {
		fmt.Fprintln(out,1)
	} else {
		fmt.Fprintln(out,0)
	}
}
// take in inputs and check the number of negatives and positives
// if one is >= t/2 print, else return 0