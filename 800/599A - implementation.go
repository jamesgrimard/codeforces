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
	var a,b,c int
	fmt.Fscan(in,&a,&b,&c)
	fmt.Fprintln(out,min((a+b)*2,a+b+c,2*(a+c),2*(b+c)))
}

func min (x,y,z,o int) int {
	if x <= y && x <= z && x <= o {
		return x
	} else if y <= x && y <= z && y <= o {
		return y	
	} else if z <= x && z <= y && z <= o {
		return z
	}
	return o
}