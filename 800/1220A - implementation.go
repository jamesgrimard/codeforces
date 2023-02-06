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
	var t int
	fmt.Fscan(in,&t)
	var word string
	fmt.Fscan(in,&word)
	var o,e,z,r,n int
	for j:=0;j<t;j++{
		if string(word[j]) == "o" {
			o++
		} else if string(word[j]) == "e" {
			e++
		} else if string(word[j]) == "z" {
			z++
		} else if string(word[j]) == "r" {
			r++
		} else if string(word[j]) == "n" {
			n++
		}
	}
	ones:= min(o,n,e) // number of 1's
	zeros:= min(z,r,min(e,e,o)-min(o,n,e)) // number of 0's
	for j:=0;j<ones;j++{
		fmt.Fprintf(out,"1 ")
	}
	for j:=0;j<zeros;j++{
		fmt.Fprintf(out,"0 ")
	}
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
func min_four(x,y,z,o int) int {
	if x <= y && x <= z && x <= o {
		return x
	} else if y <= x && y <= z && y <= o {
		return y
	} else if z <= x && z <= y && z <=o {
		return z
	} else {
		return o
	}
}