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
	var a,b,c,d int
	fmt.Fscan(in,&a,&b,&c,&d)
	big:= min(a,c,d)
	small:= min(a-min(a,c,d),b,b)
	fmt.Fprintln(out,(big*256)+(small*32))
}

func min(x,y,z int) int {
	if x <= y && x <= z {
		return x
	} else if y <= x && y <= z {
		return y
	} else {
		return z
	}
}